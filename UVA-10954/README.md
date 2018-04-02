# UVA-10954 - Add All

Yup!! The problem name reflects your task; just add a set of numbers. But you may feel yourselves condescended, to write a C/C++ program just to add a set of numbers. Such a problem will simply question your erudition. So, lets add some flavor of ingenuity to it.
Addition operation requires cost now, and the cost is the summation of those two to be added. So, to add 1 and 10, you need a cost of 11. If you want to add 1, 2 and 3. There are several ways

| 1 + 2 = 3, cost = 3<br>3 + 3 = 6, cost = 6<br>Total = 9 | 1 + 3 = 4, cost = 4<br>2 + 4 = 6, cost = 6<br>Total = 10 | 2 + 3 = 5, cost = 5<br>1 + 5 = 6, cost = 6<br>Total = 11 |
|---|---|---|

I hope you have understood already your mission, to add a set of integers so that the cost is minimal.

---
## Input

Each test case will start with a positive number, N (2 ≤ N ≤ 5,000) followed by N positive integers (all are less than 100,000). Input is terminated by a case where the value of N is zero. This case should not be processed.

---
## Output

For each case print the minimum total cost of addition in a single line.

---
## Sample Input

```
3
1 2 3
4
1 2 3 4
0
```

---
## Sample Output

```
9
19
```