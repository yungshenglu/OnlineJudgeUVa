# UVA-673 - Parentheses Balance

You are given a string consisting of parentheses `()` and `[]`. A string of this type is said to be correct:
1. if it is the empty string
2. if `A` and `B` are correct, `AB` is correct,
3. if `A` is correct, `(A)` and `[A]` is correct.
Write a program that takes a sequence of strings of this type and check their correctness. Your program can assume that the maximum string length is 128.

---
## Input

The file contains a positive integer $n$ and a sequence of $n$ strings of parentheses `()` and `[]`, one string a line.

---
## Output

A sequence of `Yes` or `No` on the output file.

---
## Sample Input

```
3
([])
(([()])))
([()[]()])()
```

---
## Sample Output

```
Yes
No
Yes
```