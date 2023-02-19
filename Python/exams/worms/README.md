# WORMS OF WORDS

The file *seq.txt* contains an unspecified number of sequences each one composed of an unspecified number of words. The same words may appear multiple times in the same sequence or in different sequences.

Write a Python program that ask the user two words and report the sequence where the two words are closest. The program must print the number of the sequences and the distance. If the two words never appear in the same sequence, the program should print a warning message.

**Example:**

```text
line sound word time line back number way water
people boy water sound line day part sound work place
year number line word boy back boy man thing time
name sentence back man sound
line boy sound word
```

If the user asks for words: *"line"* and *"time"* The program should produce:

```text
Min distance: sequence 1 (distance=1)
```

If the user asks for words: *"life"* and *"boy"* The program should produce:

```text
The two words never appear in the same sequence
```
