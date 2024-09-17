# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE' for details.

# from icecream import ic

TIMEZONE_DEF_FILENAME = 'timezones.lst'
EVENT_LIST_FILENAME = 'today.lst'


def read_list(filename):
    """All data have the same format: single_word single_word many_words"""

    data = list()
    try:
        with open(filename, 'r') as f:
            for line in f:
                w1, w2, w3 = line.split(' ', maxsplit=2)
                data.append((w1, w2, w3.strip()[1:-1]))
    except OSError as error:
        exit(f"Yeuch: Can't read file '{filename}' ({error})")

    return data


def read_timezones():
    timezones = dict()
    for tmp_a, tmp_b, tmp_c in read_list(TIMEZONE_DEF_FILENAME):
        tmp_offset = tmp_b[3:]
        if ':' in tmp_offset:
            offset_h, offset_m = tmp_offset.split(':')
            offset = int(offset_h) * 60
            if offset > 0:
                offset += int(offset_m)
            else:
                offset -= int(offset_m)
        else:
            offset = int(tmp_offset) * 60
        timezones[tmp_a[:-1]] = offset  # description is not needed

    return timezones


def convert_to_utc(time, tz, tz_defs):
    h, m = time.split(':')
    raw = int(h) * 60 + int(m) + tz_defs[tz]
    if raw < 0:
        minutes_from_midnight = raw + 24 * 60
        day = 'yesterday'
    elif raw >= 24 * 60:
        minutes_from_midnight = raw - 24 * 60
        day = 'tomorrow'
    else:
        day = 'today'
        minutes_from_midnight = raw
    h = minutes_from_midnight // 60
    m = minutes_from_midnight % 60
    return (raw, day, h, m)


def main():
    tz_defs = read_timezones()
    events = list()
    for a, b, c in read_list(EVENT_LIST_FILENAME):
        utc = convert_to_utc(a, b, tz_defs)
        events.append((utc[0], f"{utc[1]} {utc[2]:02d}:{utc[3]:02d} \"{c}\""))
    for e in sorted(events):
        print(e[1])


if __name__ == '__main__':
    main()
