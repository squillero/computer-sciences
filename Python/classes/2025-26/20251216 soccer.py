# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint
from csv import DictReader

STATS_FILENAME = 'player_stats.csv'
REFERENCE_YEAR = 2022


def read_file(filename):
    players = list()
    try:
        with open(filename, newline='') as file:
            reader = DictReader(file)
            for player in reader:
                player['birth_year'] = int(player['birth_year'])
                player['minutes'] = int(player['minutes'])
                player['goals'] = int(player['goals'])
                player['assists'] = int(player['assists'])
                player['offsides'] = int(player['offsides'])
                player['crosses'] = int(player['crosses'])
                player['interceptions'] = int(player['interceptions'])
                player['tackles_won'] = int(player['tackles_won'])
                player['pens_conceded'] = int(player['pens_conceded'])
                player['ball_recoveries'] = int(player['ball_recoveries'])
                player['aerials_won'] = int(player['aerials_won'])
                player['aerials_lost'] = int(player['aerials_lost'])
                players.append(player)

    except OSError as problem:
        print(f"Yeuch: {problem}")

    return players


# Forward_efficiency = (Goals / Minutes played) + (Goal Assists / Minutes played) - (Offsides / Minutes played)
def forward_efficiency(player):
    return (player['goals'] + player['assists'] - player['offsides']) / player['minutes']


# Midfield_efficiency = (Intercepted balls + Recovered balls + (Goal Assists / Reached crosses)) / Minutes played
def midfield_efficency(player):
    efficiency = player['interceptions'] + player['ball_recoveries']
    if player['crosses'] > 0:
        efficiency += player['assists'] / player['crosses']
    efficiency /= player['minutes']
    return efficiency


def main():
    players = read_file(STATS_FILENAME)
    # for p in players:
    #     print(forward_efficiency(p), midfield_efficency(p))

    best_midfield = max(players, key=midfield_efficency)
    print(best_midfield)
    best_forward = max(players, key=forward_efficiency)
    print(best_forward)

    ages = dict()
    for player in players:
        if player['team'] not in ages:
            ages[player['team']] = list()
        ages[player['team']].append(REFERENCE_YEAR - player['birth_year'])

    avg_ages = dict()
    for team in ages:
        avg_ages[team] = sum(ages[team]) / len(ages[team])
    pprint(avg_ages)

    # THREE METHODS FOR SORTING DICTS ON VALUES
    def helper(k):
        return avg_ages[k]

    sorted_teams = sorted(avg_ages.keys(), key=helper)
    print(sorted_teams)

    # idiomatic!
    sorted_teams = sorted(avg_ages.keys(), key=lambda t: avg_ages[t])
    print(sorted_teams)

    def take_second(k):
        return k[1]

    sorted_teams = sorted(avg_ages.items(), key=take_second)
    print(sorted_teams)


if __name__ == '__main__':
    main()
