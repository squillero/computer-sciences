# GUESS WHO

Create a Python program to simulate a (simplified) game of Guess Who...

Guess Who.. is a game featuring 24 characters / caricatures. Each character has distinctive traits (gender,
length and color of hair, glasses, hat, mustache, beard or baldness).

The goal of the game is to guess the character chosen by the opponent by asking a series of questions to which the opponent
can answer with "YES" or "NO".

The program to be implemented involves playing a simplified game, in which the player is supposed to win
if, after filtering the characters with a series of questions, there is only one character left.

In particular, the program must:

1. Read character characteristics from the `characters.txt` file and memorize them. This file contains the individual fields
   separated by a ";" and contains a first header row, useful for identifying the fields reported for each
   personage.

2. Read the user's questions from a second file (for example, "questions1.txt" or "questions2.txt"). The file of
   questions contains, one per line, the questions asked by the user, in the format

        feature_name = feature_value

(for example, Beard = YES, or Hair Length = Short).

3. print all the characters present and related information on the screen

4. show, following each question, the characters who respond to that characteristic and to the previous ones (e.g., if the question is 
   "Hair Color = Blonde", only blond characters will be shown), by printing the number
   of the question and the question, followed by the list of characters

5. print the final result on the screen: in particular, if at the end of the questions there is only one character left, the
   player won. Otherwise, the player has lost. Whether you win or lose, the program
   will print a message on the screen in which he communicates the outcome of the game.

Note: As the player asks questions, the set of characters shrinks more and more. For example, if the
player selects first the blond characters, then the ones with glasses, the remaining characters will be blond and with
glasses (not with brown, red hair, etc.).

## Example of program execution with the file "questions1.txt":

Game characters:

    Alex - Gender: Men, Hair Color: Black, Hair Length: Short, Mustache
    Alfred - Gender: Male, Hair Color: Red, Hair Length: Long, Mustache
    Anita - Gender: Woman, Hair color: Blond, Hair length: Long
    Anne - Gender: Woman, Hair Color: Black, Hair Length: Short
    Bernard - Gender: Men, Hair Color: Brown, Hair Length: Short, Hat
    Bill - Gender: Male, Hair Color: Red, Hair Length: Short, Beard, Bald
    Charles - Gender: Male, Hair Color: Blond, Hair Length: Short, Mustache
    Claire - Gender: Woman, Hair Color: Red, Hair Length: Short, Glasses, Hat
    David - Gender: Male, Hair Color: Blond, Hair Length: Short, Beard
    Eric - Gender: Men, Hair Color: Blond, Hair Length: Short, Hat
    Frans - Gender: Men, Hair Color: Red, Hair Length: Short
    George - Gender: Men, Hair Color: White, Hair Length: Short, Hat
    Herman - Gender: Male, Hair Color: Red, Hair Length: Short, Bald
    Joe - Gender: Male, Hair color: Blond, Hair length: Short, Glasses
    Maria - Gender: Woman, Hair color: Brown, Hair length: Long, Hat
    Max - Gender: Men, Hair Color: Black, Hair Length: Short, Mustache
    Paul - Gender: Men, Hair color: White, Hair length: Short, Glasses
    Peter - Gender: Men, Hair Color: White, Hair Length: Short
    Philip - Gender: Male, Hair color: Black, Hair length: Short, Beard
    Richard - Gender: Male, Hair Color: Brown, Hair Length: Short, Mustache, Beard, Bald
    Robert - Gender: Male, Hair Color: Brown, Hair Length: Short
    Sam - Gender: Male, Hair Color: White, Hair Length: Short, Glasses, Bald
    Susan - Gender: Woman, Hair Color: White, Hair Length: Long
    Tom - Gender: Men, Hair Color: Black, Hair Length: Short, Glasses, Bald

Step 1 - question: Hair Color = Blonde
Selected characters:

    Anita - Gender: Woman, Hair color: Blond, Hair length: Long
    Charles - Gender: Male, Hair Color: Blond, Hair Length: Short, Mustache
    David - Gender: Male, Hair Color: Blond, Hair Length: Short, Beard
    Eric - Gender: Men, Hair Color: Blond, Hair Length: Short, Hat
    Joe - Gender: Male, Hair color: Blond, Hair length: Short, Glasses

Step 2 - question: Hair Length = Short
Selected characters:

    Charles - Gender: Male, Hair Color: Blond, Hair Length: Short, Mustache
    David - Gender: Male, Hair Color: Blond, Hair Length: Short, Beard
    Eric - Gender: Male, Hair color: Blonde, Length 