# UVA-1587 - Box

Ivan works at a factory that produces heavy machinery. He has a simple job — he knocks up wooden boxes of different sizes to pack machinery for delivery to the customers. Each box is a rectangular parallelepiped. Ivan uses six rectangular wooden pallets to make a box. Each pallet is used for one side of the box.

![](https://i.imgur.com/Z0bEZ5o.png)

Joe delivers pallets for Ivan. Joe is not very smart and often makes mistakes — he brings Ivan pallets that do not fit together to make a box. But Joe does not trust Ivan. It always takes a lot of time to explain Joe that he has made a mistake.
Fortunately, Joe adores everything related to computers and sincerely believes that computers never make mistakes. Ivan has decided to use this for his own advantage. Ivan asks you to write a program that given sizes of six rectangular pallets tells whether it is possible to make a box out of them.

---
## Input

Input file contains several test cases. Each of them consists of six lines. Each line describes one pallet and contains two integer numbers $w$ and $h$ ($1 \le w, h \le 10,000$) — width and height of the pallet in millimeters respectively.

---
## Output

For each test case, print one output line. Write a single word `POSSIBLE` to the output file if it is possible to make a box using six given pallets for its sides. Write a single word `IMPOSSIBLE` if it is not possible to do so.

---
## Sample Input

```
1345 2584
2584 683
2584 1345
683 1345
683 1345
2584 683
1234 4567
1234 4567
4567 4321
4322 4567
4321 1234
4321 1234
```

---
## Sample Output

```
POSSIBLE
IMPOSSIBLE
```