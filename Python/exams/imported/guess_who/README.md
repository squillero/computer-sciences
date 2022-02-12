# GUESS WHO

Create a Python program to simulate a (simplified) game of Guess Who...

Guess Who.. is a game featuring 24 characters / caricatures. Each character has distinctive traits (Name, Gender, Hair color, Hair length, Glasses, Hat, Mustache, Beard, Bald).

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

(for example, Beard = YES, or Hair length = Short).

3. print all the characters present and related information on the screen

4. show, following each question, the characters who respond to that characteristic and to the previous ones (e.g., if the question is 
   "Hair color = Blond", only blond characters will be shown), by printing the number
   of the question and the question, followed by the list of characters

5. print the final result on the screen: in particular, if at the end of the questions there is only one character left, the
   player won. Otherwise, the player has lost. Whether you win or lose, the program
   will print a message on the screen in which he communicates the outcome of the game.

Note: As the player asks questions, the set of characters shrinks more and more. For example, if the
player selects first the blond characters, then the ones with glasses, the remaining characters will be blond and with
glasses (not with brown, red hair, etc.).

## Example of program execution with the file "questions1.txt":
```text
Game characters:
Alex - Gender: Male, Hair color: Black, Hair length: Short, Mustache 
Alfred - Gender: Male, Hair color: Red, Hair length: Long, Mustache 
Anita - Gender: Female, Hair color: Blond, Hair length: Long
Anne - Gender: Female, Hair color: Black, Hair length: Short
Bernard - Gender: Male, Hair color: Brown, Hair length: Short, Hat
Bill - Gender: Male, Hair color: Red, Hair length: Short, Beard, Bald
Charles - Gender: Male, Hair color: Blond, Hair length: Short, Mustache 
Claire - Gender: Female, Hair color: Red, Hair length: Short, Glasses, Hat
David - Gender: Male, Hair color: Blond, Hair length: Short, Beard
Eric - Gender: Male, Hair color: Blond, Hair length: Short, Hat
Frans - Gender: Male, Hair color: Red, Hair length: Short
George - Gender: Male, Hair color: White, Hair length: Short, Hat
Herman - Gender: Male, Hair color: Red, Hair length: Short, Bald
Joe - Gender: Male, Hair color: Blond, Hair length: Short, Glasses
Maria - Gender: Female, Hair color: Brown, Hair length: Long, Hat
Max - Gender: Male, Hair color: Black, Hair length: Short, Mustache 
Paul - Gender: Male, Hair color: White, Hair length: Short, Glasses
Peter - Gender: Male, Hair color: White, Hair length: Short
Philip - Gender: Male, Hair color: Black, Hair length: Short, Beard
Richard - Gender: Male, Hair color: Brown, Hair length: Short, Mustache , Beard, Bald
Robert - Gender: Male, Hair color: Brown, Hair length: Short
Sam - Gender: Male, Hair color: White, Hair length: Short, Glasses, Bald
Susan - Gender: Female, Hair color: White, Hair length: Long
Tom - Gender: Male, Hair color: Black, Hair length: Short, Glasses, Bald

Step 1 - question: Hair color = Blond
Selected characters:
Anita - Gender: Female, Hair color: Blond, Hair length: Long
Charles - Gender: Male, Hair color: Blond, Hair length: Short, Mustache 
David - Gender: Male, Hair color: Blond, Hair length: Short, Beard
Eric - Gender: Male, Hair color: Blond, Hair length: Short, Hat
Joe - Gender: Male, Hair color: Blond, Hair length: Short, Glasses

Step 2 - question: Hair length = Short
Selected characters:
Charles - Gender: Male, Hair color: Blond, Hair length: Short, Mustache 
David - Gender: Male, Hair color: Blond, Hair length: Short, Beard
Eric - Gender: Male, Hair color: Blond, Hair length: Short, Hat
Joe - Gender: Male, Hair color: Blond, Hair length: Short, Glasses

Step 3 - question: Glasses = YES
Selected characters:
Joe - Gender: Male, Hair color: Blond, Hair length: Short, Glasses

Congratulations, you win! Character selected:
Joe - Gender: Male, Hair color: Blond, Hair length: Short, Glasses
```

## Example of program execution with the file "questions2.txt":
```text
Game characters:
Alex - Gender: Male, Hair color: Black, Hair length: Short, Mustache 
Alfred - Gender: Male, Hair color: Red, Hair length: Long, Mustache 
Anita - Gender: Female, Hair color: Blond, Hair length: Long
Anne - Gender: Female, Hair color: Black, Hair length: Short
Bernard - Gender: Male, Hair color: Brown, Hair length: Short, Hat
Bill - Gender: Male, Hair color: Red, Hair length: Short, Beard, Bald
Charles - Gender: Male, Hair color: Blond, Hair length: Short, Mustache 
Claire - Gender: Female, Hair color: Red, Hair length: Short, Glasses, Hat
David - Gender: Male, Hair color: Blond, Hair length: Short, Beard
Eric - Gender: Male, Hair color: Blond, Hair length: Short, Hat
Frans - Gender: Male, Hair color: Red, Hair length: Short
George - Gender: Male, Hair color: White, Hair length: Short, Hat
Herman - Gender: Male, Hair color: Red, Hair length: Short, Bald
Joe - Gender: Male, Hair color: Blond, Hair length: Short, Glasses
Maria - Gender: Female, Hair color: Brown, Hair length: Long, Hat
Max - Gender: Male, Hair color: Black, Hair length: Short, Mustache 
Paul - Gender: Male, Hair color: White, Hair length: Short, Glasses
Peter - Gender: Male, Hair color: White, Hair length: Short
Philip - Gender: Male, Hair color: Black, Hair length: Short, Beard
Richard - Gender: Male, Hair color: Brown, Hair length: Short, Mustache , Beard, Bald
Robert - Gender: Male, Hair color: Brown, Hair length: Short
Sam - Gender: Male, Hair color: White, Hair length: Short, Glasses, Bald
Susan - Gender: Female, Hair color: White, Hair length: Long
Tom - Gender: Male, Hair color: Black, Hair length: Short, Glasses, Bald

Step 1 - question: Gender = Male
Selected characters:
Alex - Gender: Male, Hair color: Black, Hair length: Short, Mustache 
Alfred - Gender: Male, Hair color: Red, Hair length: Long, Mustache 
Bernard - Gender: Male, Hair color: Brown, Hair length: Short, Hat
Bill - Gender: Male, Hair color: Red, Hair length: Short, Beard, Bald
Charles - Gender: Male, Hair color: Blond, Hair length: Short, Mustache 
David - Gender: Male, Hair color: Blond, Hair length: Short, Beard
Eric - Gender: Male, Hair color: Blond, Hair length: Short, Hat
Frans - Gender: Male, Hair color: Red, Hair length: Short
George - Gender: Male, Hair color: White, Hair length: Short, Hat
Herman - Gender: Male, Hair color: Red, Hair length: Short, Bald
Joe - Gender: Male, Hair color: Blond, Hair length: Short, Glasses
Max - Gender: Male, Hair color: Black, Hair length: Short, Mustache 
Paul - Gender: Male, Hair color: White, Hair length: Short, Glasses
Peter - Gender: Male, Hair color: White, Hair length: Short
Philip - Gender: Male, Hair color: Black, Hair length: Short, Beard
Richard - Gender: Male, Hair color: Brown, Hair length: Short, Mustache , Beard, Bald
Robert - Gender: Male, Hair color: Brown, Hair length: Short
Sam - Gender: Male, Hair color: White, Hair length: Short, Glasses, Bald
Tom - Gender: Male, Hair color: Black, Hair length: Short, Glasses, Bald

Step 2 - question: Hair length = Short
Selected characters:
Alex - Gender: Male, Hair color: Black, Hair length: Short, Mustache 
Bernard - Gender: Male, Hair color: Brown, Hair length: Short, Hat
Bill - Gender: Male, Hair color: Red, Hair length: Short, Beard, Bald
Charles - Gender: Male, Hair color: Blond, Hair length: Short, Mustache 
David - Gender: Male, Hair color: Blond, Hair length: Short, Beard
Eric - Gender: Male, Hair color: Blond, Hair length: Short, Hat
Frans - Gender: Male, Hair color: Red, Hair length: Short
George - Gender: Male, Hair color: White, Hair length: Short, Hat
Herman - Gender: Male, Hair color: Red, Hair length: Short, Bald
Joe - Gender: Male, Hair color: Blond, Hair length: Short, Glasses
Max - Gender: Male, Hair color: Black, Hair length: Short, Mustache 
Paul - Gender: Male, Hair color: White, Hair length: Short, Glasses
Peter - Gender: Male, Hair color: White, Hair length: Short
Philip - Gender: Male, Hair color: Black, Hair length: Short, Beard
Richard - Gender: Male, Hair color: Brown, Hair length: Short, Mustache , Beard, Bald
Robert - Gender: Male, Hair color: Brown, Hair length: Short
Sam - Gender: Male, Hair color: White, Hair length: Short, Glasses, Bald
Tom - Gender: Male, Hair color: Black, Hair length: Short, Glasses, Bald

Step 3 - question: Beard = YES
Selected characters:
Bill - Gender: Male, Hair color: Red, Hair length: Short, Beard, Bald
David - Gender: Male, Hair color: Blond, Hair length: Short, Beard
Philip - Gender: Male, Hair color: Black, Hair length: Short, Beard
Richard - Gender: Male, Hair color: Brown, Hair length: Short, Mustache , Beard, Bald

Too bad, you lose.
```
