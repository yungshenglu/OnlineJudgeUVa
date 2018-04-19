# UVA-496 - Simply Subsets

After graduating from the University of Notre Dame, you obtained a job at Top Shelf Software, Inc., as an entry-level computer engineer. On the first day, your manager sits down with you and tasks you with the following job: "We want to see how well you understand computer programming and the abstract science behind it. As an evaluation for all of our new hires, we require them to write a program to determine the relationship between pairs of sets. I'm quite sure that you'll do well; my confidence is high. Here’s a list of requirements for what the program should do. Good luck."

---
## Input

Your program should accept an even number of lines of text. Each pair of lines will represent two sets; the first line represents set $A$, the second line represents set $B$. Each line of text (set) will be a list of distinct integers.

---
## Output

After each pair of lines has been read in, the sets should be compared and one of the following responses should be output:
* $A$ is a proper subset of $B$
* $B$ is a proper subset of $A$
* $A$ equals $B$
* $A$ and $B$ are disjoint
* I'm confused!

---
## Sample Input

```
55 27
55 27
9 24 1995
9 24
1 2 3
1 2 3 4
1 2 3
4 5 6
1 2
2 3
```

---
## Sample Output

```
A equals B
B is a proper subset of A
A is a proper subset of B
A and B are disjoint
I'm confused!
```