# STRAWBERRY FIELDS

Write a program for reading a text file composed of multiple lines and print all the triplets of adjacent words of the same length in uppercase. Punctuation marks should not be considered part of the words. The file does not contain genitives (possessive) nor contractions, such as *n't*, *'ve*.

For example, given the file `strawberry-short.txt`:

```
No one I think is in my tree
I mean it must be high or low
That is you cannot, you know, tune in, but it is all right
That is I think it is not too bad...

Let me take you down, because I am going to
Strawberry Fields
Nothing is real, and nothing to get hung about
Strawberry Fields forever
```

The output should be:

```
('IS', 'IN', 'MY')
('NOT', 'TOO', 'BAD')
('TOO', 'BAD', 'LET')
```

**Please note** that *too* and *bad* appear in two different triplets.

While for the complete lyrics (file `strawberry.txt`), the output should be:

```
('EASY', 'WITH', 'EYES')
('ALL', 'YOU', 'SEE')
('IS', 'IN', 'MY')
('NOT', 'TOO', 'BAD')
('TOO', 'BAD', 'LET')
('IT', 'IS', 'ME')
```
