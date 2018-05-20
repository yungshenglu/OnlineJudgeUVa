# UVA-11344 - The Huge One

Your girlfriend Marry has some problems with programming task teacher gave her. Since you have the great programming skills it won’t be a problem for you to help her. And certainly you don’t want Marry to have her time spent on this task because you were planning to go to the cinema with her this weekend. If you accomplish this task Marry will be very grateful and will definitely go with you to the cinema and maybe even more. So it’s up to you now.
That’s the task she was given:
Number $0 \le M \le 10^1000$ is given, and a set $S$ of different numbers from the interval $[1;12]$. All numbers in this set are integers. Number $M$ is said to be wonderful if it is divisible by all numbers in set $S$. Find out whether or not number $M$ is wonderful.

---
## Input

First line of input data contains number $N$ ($0 < N \le 2000$). Then $N$ tests follow each described on two lines. First line of each test case contains number $M$. Second line contains the number of elements in a set $S$ followed by a space and the numbers in the set. Numbers of this set are separated by a space character.

---
## Output

Output one line for each test case: `M - Wonderful.`, if the number is wonderful or `M - Simple.` if it is not. Replace $M$ character with the corresponding number. Refer output data for details.

---
## Sample Input

```
4
0
12 1 2 3 4 5 6 7 8 9 10 11 12
379749833583241
1 11
3909821048582988049
1 7
10
3 1 2 9
```

---
## Sample Output

```
0 - Wonderful.
379749833583241 - Wonderful.
3909821048582988049 - Wonderful.
10 - Simple.
```