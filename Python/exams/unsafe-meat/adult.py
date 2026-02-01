# Copyright © 2026 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

with open('report-small.txt') as file:
    ranges_raw, batches_raw = file.read().split('\n\n')
ranges = [tuple(map(int, line.split('-'))) for line in ranges_raw.split()]
dangerous = (b for b in batches_raw.split() if any(s <= int(b) <= e for s, e in ranges))
print('\n'.join(dangerous))
