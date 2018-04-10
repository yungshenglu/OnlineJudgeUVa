# UVA-696 - How Many Knights

The knight is a piece used in chess, a game played on a board with squares arranged in rows and columns. A knight attacks pieces that are either (a) two rows and one column away from its position, or (b) one row and two columns away from its position. The following diagram illustrates this. The square marked N represents the position of the knight, and the squares marked `X` indicate the squares that are under attack.

|:---:|:---:|:---:|:---:|:---:|
| | X | | X | |
| X | | | | X |
| | | N | | |
| X | | | | X |
| | X | | X | |

In this problem you are to determine the largest number of knights that can be placed on a board with $M$ rows and $N$ columns so that no knight is attacking any other. $M$ and $N$ will each be no larger than 500.

---
## Input

The input consists of pairs of integers giving values for $M$ and $N$, followed by a pair of zeroes.

---
## Output

For each input pair, display the number of rows and columns in the board, and the number of knights that can be appropriately placed.

---
## Sample Input

```
2 3
5 5
4 7
0 0
```

---
## Sample Output

```
4 knights may be placed on a 2 row 3 column board.
13 knights may be placed on a 5 row 5 column board.
14 knights may be placed on a 4 row 7 column board.
```