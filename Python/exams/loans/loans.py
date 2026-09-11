# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

LOANS_FILENAME = "Loans.csv"
LOANS_TO_CHECK_FILENAME = "LoansToCheck.csv"


def main():
    genres = dict()
    loans = dict()  # checkout: `defaultdict(list)`
    try:
        with open(LOANS_FILENAME) as csv:
            for line in csv:
                copy_code, isbn_code, genre = line.strip().split(";")
                if isbn_code not in loans:  # useless with a defaultdict
                    loans[isbn_code] = list()
                loans[isbn_code].append(copy_code)  # keep order
                genres[isbn_code] = genre
    except OSError as problem:
        print(f"Yeuch: {problem}")

    loans_to_check = ""
    for isbn_code in sorted(loans):
        if len(loans[isbn_code]) > 3:
            loans_to_check += f"{isbn_code};{genres[isbn_code]};{';'.join(loans[isbn_code])}\n"

    if loans_to_check:
        try:
            with open(LOANS_TO_CHECK_FILENAME, "w") as csv:
                csv.write(loans_to_check)
        except OSError as problem:
            print(f"Yeuch: {problem}")
    else:
        print("No loans to check.")


if __name__ == "__main__":
    main()
