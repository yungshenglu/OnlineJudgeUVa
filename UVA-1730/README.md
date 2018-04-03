# UVA-1730 - Sum of MSLCM

A positive integer N can be the LCM (Least Common Multiple) of different set of numbers. For example, LCM(6, 24) = 24, LCM(12, 8) = 24, LCM(1, 2, 3, 4, 8) = 24, etc. For a given number N, maximum sum LCM indicates the set of numbers whose LCM is N and summation is maximum. Let, MSLCM(N) denote this maximum sum of numbers. Given the value of N you will have to find the value:
$$
\sum_{ i = 2 }^{ N }{ \mathrm{ MSLCM }(i) }
$$
Obviously, in a set the same value never comes twice.

---
## Input

Input file contains at most 200 lines. Each line contains a positive integer which denotes the value of N (1 < N < 20,000,001). Input is terminated by a line containing a single zero, which should not be processed.

---
## Output

For each positive number N in the input, produce one line of output. This line contains an integer which denotes the value
$$
\sum_{ i = 2 }^{ N }{ \mathrm{ MSLCM }(i) }
$$

---
## Sample Input

```
10
1000
0
```

---
## Sample Output

```
86
823080
```