# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

CSV_FILE = 'player_stats.csv'
TEXT_FIELDS = {'player', 'position', 'team'}

import csv


def read_players_stats(filename):
    players = list()
    with open(filename, newline='') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            for k, v in row.items():
                # All fields are integer except the TEXT_FIELDS ones
                if k not in TEXT_FIELDS:
                    row[k] = int(v)
            players.append(row)
    return players


def calculate_efficiencies(players):
    for p in players:
        p['forward_efficiency'] = (p['goals'] + p['assists'] - p['offsides']) / p['minutes']
        if p['crosses'] == 0:
            t = 0
        else:
            t = p['assists'] / p['crosses']
        p['midfield_efficiency'] = (p['interceptions'] + p['ball_recoveries'] + t) / p['minutes']


def split_teams(players):
    teams = dict()
    for p in players:
        if p['team'] not in teams:
            teams[p['team']] = list()
        teams[p['team']].append(dict(p))
    return teams


def main():
    players = read_players_stats(CSV_FILE)
    calculate_efficiencies(players)

    # More efficient Forward players
    print(f"{'Name':<30s} {'Team':<30s} {'Forward efficiency':>20s}")
    for p in sorted(players, key=lambda p: p['forward_efficiency'], reverse=True)[:3]:
        print(f"{p['player']:<30s} {p['team']:<30s} {p['forward_efficiency']:20.3f}")
    print()

    # More efficient Midfield players
    print(f"{'Name':<30s} {'Team':<30s} {'Midfield efficiency':>20s}")
    for p in sorted(players, key=lambda p: p['midfield_efficiency'], reverse=True)[:3]:
        print(f"{p['player']:<30s} {p['team']:<30s} {p['midfield_efficiency']:20.3f}")
    print()

    # Split teams!
    all_teams = split_teams(players)

    # Three teams with lower average age
    total_age = dict()
    for team, team_players in all_teams.items():
        total_age[team] = list()
        for player in sorted(team_players, key=lambda p: p['birth_year'])[:3]:
            total_age[team].append(2022 - player['birth_year'])
    avg_age = dict()
    for team, ages in total_age.items():
        avg_age[team] = sum(ages) / len(ages)
    print("The three teams with lower age average are:")
    for t, a in sorted(avg_age.items(), key=lambda x: x[1])[:3]:
        print(f"{t:<20} {a:.2f} years")
    print()

    # Most efficient team
    efficiency_tot = dict()
    efficiency_players = dict()
    for team, team_players in all_teams.items():
        efficiency_tot[team] = 0
        efficiency_players[team] = list()
        for p in sorted(team_players, key=lambda p: p['forward_efficiency'], reverse=True)[:3]:
            efficiency_tot[team] += p['forward_efficiency']
            efficiency_players[team].append(p)
    most_efficient_team = max(efficiency_tot, key=lambda t: efficiency_tot[t])
    print(f"The most efficient team is {most_efficient_team}")
    for p in efficiency_players[most_efficient_team]:
        print(f"{p['player']}'s forward efficiency: {p['forward_efficiency']:.3f}")


if __name__ == '__main__':
    main()
