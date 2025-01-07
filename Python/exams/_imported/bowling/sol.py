BOWLING_FILE = "bowling.txt"
MAX_SCORE = 10
MIN_SCORE = 0

def extract_data(filename):
    data = list()
    with open(filename, "r") as b_file:
        for line in b_file:
            line = line.rstrip()
            values = line.split(';')
            surname_name = values[0] + ' ' + values[1]
            scores = list()
            for score in values[2:]:
                scores.append(int(score))
            data.append([surname_name, scores])
    return data

def sum_scores(data):
    players_stat = dict()
    for item in data:
        player = item[0]
        score = sum(item[1])
        players_stat[player] = score
    players_stat = dict(sorted(players_stat.items(), key=lambda item: item[1], reverse=True))
    return players_stat

def max_full_knock_down(data):
    max = -1
    for item in data:
        if item[1].count(MAX_SCORE) > max:
            max = item[1].count(10)
            candidate_name = item[0]
    return (candidate_name, max)


def max_miss(data):
    max = -1
    for item in data:
        if item[1].count(MIN_SCORE) > max:
            max = item[1].count(0)
            candidate_name = item[0]
    return (candidate_name, max)


def main():
    match_data = extract_data(BOWLING_FILE)
    players_score = sum_scores(match_data)
    max_full_score_player, max_full_score_num = max_full_knock_down(match_data)
    max_zero_score_player, max_zero_score_num = max_miss(match_data)
    for player, score in players_score.items():
        print(f'{player} {score}')
    print(f'{max_full_score_player} has knocked down all the pins {max_full_score_num} time(s)')
    print(f'{max_zero_score_player} has knocked down all the pins {max_zero_score_num} time(s)')
    
    

if __name__ == '__main__':
    main()
