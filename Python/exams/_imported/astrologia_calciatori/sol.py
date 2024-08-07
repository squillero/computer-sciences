SPORTIVI_FILE = "sportivi.csv"
ZODIACO_FILE = "zodiaco.csv"

GOAL = 0
DATE = 1
MAX_BAR = 50

def sportivi_date_construct(date):
    dd, mm, _ = date.split("/")
    return mm + dd


def zodiaco_date_construct(date):
    dd, mm = date.split("/")
    return mm + dd


def read_store_date_goal(filename):
    data_table = list()
    with open(filename, "r") as s_file:
        for line in s_file:
            line = line.rstrip()
            _, goal, _, birthdate = line.split(",")
            comparable_date = sportivi_date_construct(birthdate)
            data_table.append([int(goal), comparable_date])

    return data_table


def compare(start_date, end_date, goal_table):
    sum = 0
    i = 0
    while i < len(goal_table):
        if start_date != "1222":            
            if start_date <= goal_table[i][DATE] <= end_date:
                sum += goal_table[i][GOAL]
                goal_table.pop(i)
            else:
                i += 1
        elif start_date == "1222":         
            if start_date <= goal_table[i][DATE] <= "1231" or "0101" <= goal_table[i][DATE] <= end_date:
                sum += goal_table[i][GOAL]
                goal_table.pop(i)
            else:
                i += 1
    return sum                



def read_zodiac(filename_z, filename_s):
    zodiac_stat = dict()
    goals_table = read_store_date_goal(filename_s)
    with open(filename_z, "r") as z_file:
        for line in z_file:
            line = line.rstrip()
            zodiac, s_date, e_date = line.split(",")
            s_date = zodiaco_date_construct(s_date)
            e_date = zodiaco_date_construct(e_date)
            goals_num = compare(s_date, e_date, goals_table)
            zodiac_stat[zodiac] = goals_num
    zodiac_stat = dict(sorted(zodiac_stat.items(), key=lambda item: item[1], reverse=True))
    return zodiac_stat


def main():
    zodiac_dict = read_zodiac(ZODIACO_FILE, SPORTIVI_FILE)
    max_zodiac = max(zodiac_dict.values())
    for sign, number in zodiac_dict.items():
        num_bar = int((number/max_zodiac) * MAX_BAR)
        print(f'{sign:12}\t({number})\t{"*" * num_bar}')

if __name__ == '__main__':
    main()
