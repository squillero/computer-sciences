# ARTISTIC GYMNASTICS

Create a Python program that manages the scores of an artistic gymnastics competition. The information is
contained in a file "scores.txt". Each line of the file has the following format (fields separated by space):

    name, surname, sex, nation, the 5 scores assigned by the judges.

Make the following assumptions:

- The number of lines in the file is not known a priori
- The Name and Surname fields do not contain spaces
- The athlete's sex is encoded by an `M` or` F` character.
- The country abbreviation is always coded on 3 capital letters
- 5 votes are always assigned for each athlete, separated by a space and the value may vary
  from a minimum of 0 to a maximum of 10.

The program must print:

1. The name of the female winner. When calculating the total points, the maximum and the maximum score must always be DISCARDED
   minimum among the 5 assigned. The final score is therefore given by the sum of the three remaining scores.
2. The ranking of the top 3 nations, including both female and male athletes. For each nation the total score is
   calculated by adding the scores of all its athletes (M and F, and always discarding the highest and lowest scores
   of each athlete).

Example:

    Yuri Chechi M ENG 9.3 8.9 9.7 9.7 9.8
    Veronica Servente F ITA 9.0 9.0 9.0 9.2 9.5
    Sabrina Vega F USA 8.4 8.7 8.5 8.6 9.0
    Viktoria Komova F RUS 8.3 8.7 9.5 9.6 9.0
    Rebecca Downie F GRB 8.2 8.9 8.9 8.6 9.3
    Douglas F USA Cages 8.2 8.9 8.9 8.6 9.3
    Hannah Whelan F GRB 8.0 8.0 8.0 8.0 8.0

the program output should be the following:

    Female winner:
    Veronica Servente, ITA - Score: 27.2
    
    Overall nations ranking:
    1) ITA - Total score: 55.9
    2) USA - Final Score: 52.2
    3) GRB - Final Score: 50.4 
