# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

"""Hello. This is how to pass the exam!"""

from pprint import pprint

PLAYER_STATS_FILENAME = "player-stats.csv"

INDEX_POSITION = 0
INDEX_TEAM = 1
INDEX_BIRTH_YEAR = 2
INDEX_MINUTES = 3
INDEX_GOALS = 4
INDEX_ASSISTS = 5
INDEX_OFFSIDES = 6
INDEX_CROSSES = 7
INDEX_INTERCEPTIONS = 8
INDEX_TACKLES_WON = 9
INDEX_PENS_CONCEDED = 10
INDEX_BALL_RECOVERIES = 11
INDEX_AERIALS_WON = 12
INDEX_AERIALS_LOST = 13


def read_player_stat(filename):
    """Read the CSV with player stats and returns a dictionary of tuples"""
    stat = dict()
    try:
        with open(filename, encoding="utf8") as fin:
            _ = fin.readline()
            for line in fin:
                player, *data = line.strip().split(",")
                data_cooked = data[:2]
                for d in data[2:]:
                    data_cooked.append(int(d))
                stat[player] = tuple(data_cooked)
    except OSError as bob:
        print(f"Yeuch: {bob}")
        stat = dict()
    return stat


def calculate_forward_efficiency(players):
    """Calculate forward efficency fo all players"""
    fwd_efficiency = dict()
    for name, data in players.items():
        fwd_efficiency[name] = (
            (data[INDEX_GOALS] / data[INDEX_MINUTES])
            + (data[INDEX_ASSISTS] / data[INDEX_MINUTES])
            - (data[INDEX_OFFSIDES] / data[INDEX_MINUTES])
        )
    return fwd_efficiency


def calculatre_midfield_efficency(players):
    """Calculate midfield efficiency for all players"""
    mid_efficency = dict()
    for name, data in players.items():
        try:
            mid_efficency[name] = (
                data[INDEX_INTERCEPTIONS]
                + data[INDEX_BALL_RECOVERIES]
                + (data[INDEX_ASSISTS] / data[INDEX_CROSSES])
                / data[INDEX_MINUTES]
            )
        except ZeroDivisionError:
            pass
    return mid_efficency


def calculate_team_average_age(players):
    """Get the team's avg age"""
    team_ages = dict()
    for data in players.values():
        if data[INDEX_TEAM] not in team_ages:
            team_ages[data[INDEX_TEAM]] = list()
        team_ages[data[INDEX_TEAM]].append(
            2023 - data[INDEX_BIRTH_YEAR]
        )
    team_avg_age = dict()
    for team, ages in team_ages.items():
        team_avg_age[team] = sum(ages) / len(ages)
    return team_avg_age


def main():
    """This is main. Oh yeah!"""
    players = read_player_stat(PLAYER_STATS_FILENAME)
    fwd_efficiency = calculate_forward_efficiency(players)
    midfield_efficiency = calculatre_midfield_efficency(players)

    sorted_stuff = sorted(
        fwd_efficiency, key=lambda p: fwd_efficiency[p], reverse=True
    )
    print(sorted_stuff[0], fwd_efficiency[sorted_stuff[0]])

    sorted_stuff = sorted(
        midfield_efficiency,
        key=lambda p: midfield_efficiency[p],
        reverse=True,
    )
    print(sorted_stuff[0], midfield_efficiency[sorted_stuff[0]])

    team_avg_age = calculate_team_average_age(players)
    tmp = sorted(team_avg_age, key=lambda n: team_avg_age[n])
    for name in tmp[:3]:
        print(f"* {name}: {team_avg_age[name]:.2f}")

    team_fwd_eff = dict()
    for name, efficency in fwd_efficiency.items():
        team = players[name][INDEX_TEAM]
        if team not in team_fwd_eff:
            team_fwd_eff[team] = list()
        team_fwd_eff[team].append(efficency)

    for team, data in team_fwd_eff.items():
        team_fwd_eff[team] = sorted(data)[:3]

    sum_eff = dict()
    for team, data in team_fwd_eff.items():
        sum_eff[team] = sum(data)

    tmp = sorted(sum_eff, key=lambda t: sum_eff[t], reverse=True)
    print(tmp[0], sum_eff[tmp[0]])


if __name__ == "__main__":
    main()
