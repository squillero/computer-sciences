##--------------#-----------------------------------------------------------#
#|              | CLASS SAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)            #
#|   ######     | (!) 2020, Giovanni Squillero <squillero@polito.it>        #
#|  #######     | https://github.com/squillero/computer-sciences            #
#|  ####   \    |                                                           #
#|   ###G  c\   | => Copying and distributing this file for classroom use,  #
#|   ##     _\  | either with or without modification, is permitted without #
#|   |    _/    | royalties provided that this 11-line comment is preserved #
#|   |   _/     |                                                           #
#|              | => THIS FILE IS OFFERED AS-IS, WITHOUT ANY WARRANTY       #
##--------------#-----------------------------------------------------------#


from random import randint

def main():
    """Main entry point"""

    num_scores = int(input("Number of scores: "))
    scores = []
    for i in range(num_scores):
        scores.append(randint(1, 30))

    new_scores = remove_lowest(scores)
    average = compute_average(new_scores)
    print(f"Original scores: {scores}, removing lowest: {new_scores}, average: {average}")


def remove_lowest(scores):
    """Remove lowest score from list and return it"""
    pos = 0
    tmp_scores = list(scores)
    for i, v in enumerate(tmp_scores):
        if v < tmp_scores[pos]:
            pos = i
    tmp_scores.pop(pos)
    return tmp_scores


def compute_average(scores):
    """Return average of list"""
    sum_ = 0.
    for s in scores:
        sum_ = sum_ + s
    return sum_/len(scores)


if __name__ == '__main__':      # BLACK MAGIC!
    main()