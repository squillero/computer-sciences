# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

"""
An assurance company labels its own customers as "Reliable" or "Unreliable" 
based on the punctuality how the pay their loan installments. In this context,
you are asked to analyze the customers information understanding if there are
differences between the customers labeled as Reliable and the ones labeled as
Unreliable. 

You will receive a file named `customers.txt` having the information of the
customers in every line. This is a comma separated file having the following
fields in every line:

Name,Last Name,Age,EnrollmentTime,Home,Reliability
  
where:
- Age is given as an integer number 
- EnrollmentTime is a real number indicating the number of years in the current
  position, for example, 3.5 means that the customer is hired since three years
  and a half.
- Home is a string showing if the customer owns "o" or rents "r" the house were
  she/he is living.
- Reliability is an integer number indicating the reliability level: 
  0 Unreliable, 1 Reliable

you are asked to read the file and then analyze this **printing in the screen**
the following:

1. The absolute value of the difference between the average age of the Reliable 
   and the unreliable customers
2. The minimum value of the EnrollmentTime of the Reliable customers
3. The percentage of Reliable customers living in his/her own houses

Additionally, you have also to report in a new file named `anomalies.txt` the
Unreliable customers that comply with the characteristics of the Reliable
customers. 

This file must include in every line the "Name" and "Last Name" of the 
Unreliable customers that comply with all the next constraints:

- The customer is older than the average age of the Reliable customers
- Their enrollment time is higher than the minimum value of the Reliable 
  customers
- They own the house where they live
- They are identified as Unreliable customers


# Example of the file customers.txt:
| Bruce,Wayne,39,10.5,o,1
| Tony,Stark,50,25,o,0
| Clark,Kent,33,7.5,r,0
| Sue,Storm,30,0.5,o,0
| Steve,Rogers,68,40.8,o,1
| Peter,Parker,25,0,r,0
| Reed,Richards,40,26.5,o,1
| Bruce,Banner,47,15,o,0
| Selina,Kyle,37,5,r,1


# Program Output:
```
The Reliable customers have an average age of 9.0 years higher than the Unreliable ones
Minimum EnrollmentTime of the Reliable customers: 5.0 years 75% of the Reliable customers own the house where they live
```
	
# The file anomalies.txt must contain this information at the end of the program: 
| Tony Stark
| Bruce Banner
"""

CUSTOMERS_FILE_NAME = 'customers.txt'
ANOMALIES_FILE_NAME = 'anomalies.txt'

# Resourceful students should consider collections.namedtuple()
FIRST_NAME = 0
LAST_NAME = 1
AGE = 2
ENROLLMENT_TIME = 3
HOME = 4
RELIABILITY = 5

import sys


def load_customers():
    """Return a list of tuples with the content of CUSTOMERS_FILE_NAME"""
    customers = list()
    try:
        with open(CUSTOMERS_FILE_NAME) as input:
            for line in input:
                first_name, last_name, age, enrollment_time, home, reliability = line.strip().split(
                    ',')
                age = int(age)
                enrollment_time = float(enrollment_time)
                reliability = reliability == '1'
                customers.append(
                    tuple((first_name, last_name, age, enrollment_time, home, reliability)))
    except OSError as problem:
        print(f"Yeuch: {problem}")
        sys.exit(10)
    except TypeError as problem:
        print(f"Bad format: {problem}")
        sys.exit(10)
    return customers


def average_ages(customers):
    """Calculate average ages for reliable and un-reliable customers, return both values"""
    reliable_age = list()
    unreliable_age = list()
    for c in customers:
        if c[RELIABILITY] == True:
            reliable_age.append(c[AGE])
        else:
            unreliable_age.append(c[AGE])

    # Notez Bien: braver students should consider list comprehension:
    # reliable_age = [c[AGE] for c in customers if c[RELIABILITY] == True]
    # unreliable_age = [c[AGE] for c in customers if c[RELIABILITY] == False]

    return sum(reliable_age) / len(reliable_age), sum(unreliable_age) / len(unreliable_age)


def get_min_enrollment_time(customers, reliability):
    """Get the minimum enrollement time for customers of a given reliability"""
    tmp = list()
    for c in customers:
        if c[RELIABILITY] == reliability:
            tmp.append(c[ENROLLMENT_TIME])
    return min(tmp)
    # Notez Bien: braver students should consider generators:
    # return min(c[ENROLLMENT_TIME] for c in customers if c[RELIABILITY] == reliability)


def get_percentage_own_house(customers, reliability):
    """Get the percentage of owned houses for customers of a given reliability"""
    cnt_tot, cnt = 0, 0
    for c in customers:
        if c[RELIABILITY] == reliability:
            cnt_tot += 1
            if c[HOME] == 'o':
                cnt += 1
    return cnt / cnt_tot


def main():
    # get stats
    customers = load_customers()
    avg_age_reliable, avg_age_unreliable = average_ages(customers)
    min_enroll_reliable = get_min_enrollment_time(customers, True)
    perc_reliable_own_house = get_percentage_own_house(customers, True)

    # detect anomalies and save them
    anomalies = list()
    for c in customers:
        if c[RELIABILITY] == False and c[AGE] > avg_age_reliable and c[
                ENROLLMENT_TIME] > min_enroll_reliable and c[HOME] == 'o':
            anomalies.append(c)
    try:
        with open(ANOMALIES_FILE_NAME, 'w') as out:
            for c in anomalies:
                out.write(f"{c[FIRST_NAME]} {c[LAST_NAME]}\n")
    except OSError as problem:
        print(f"Yeuch: {problem}")
        sys.exit(10)

    # print info
    if avg_age_reliable > avg_age_unreliable:
        print(
            f"The Reliable customers have an average age of {avg_age_reliable-avg_age_unreliable:.1f} years higher than the Unreliable ones"
        )
    elif avg_age_reliable < avg_age_unreliable:
        print(
            f"The Unreliable customers have an average age of {avg_age_unreliable-avg_age_reliable:.1f} years higher than the Reliable ones"
        )
    else:
        print(f"The Reliable customers have the same average age of the Unreliable ones")

    print(
        f"Minimum EnrollmentTime of the Reliable customers: {min_enroll_reliable:.1f} years {100*perc_reliable_own_house:.0f}% of the Reliable customers own the house where they live"
    )


if __name__ == '__main__':
    main()