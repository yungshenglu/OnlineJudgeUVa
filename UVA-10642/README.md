# UVA-10642 - Can You Solve It?

First take a look at the following picture. In this picture, each circle has a coordinate according to Cartesian Coordinate System. You can move from one circle to another following the path denoted by forward arrow symbols. To go from a source circle to a destination circle,
```
total_number_of_step(s)_needed = number_of_intermediate_circles_you_pass + 1
```
For example, to go from (0, 3) to (3, 0) you have to pass two intermediate circles (1, 2) and (2, 1). So, in this case, total number of steps needed is 2 + 1 = 3. In this problem, you are to calculate number of step(s) needed for a given source circle and a destination circle. You can assume that, it is not possible to go back using the reverse direction of the arrows.

![](http://gpe3.acm-icpc.tw/pct/images/8870d5bbbdbbe4e90619a25a1f112e27.jpg)

---
## Input

The first line in the input is the number of test cases n (0 < n ≤ 500) to handle. Following there are n lines each containing four integers (0 ≤ each_integer ≤ 100,000) the first pair of which represents the coordinates of the source circle and the other represents that of the destination circle. The coordinates are listed in a form (x, y).

---
## Output

For each pair of integers your program should output the case number first and then the number of step(s) to reach the destination from the source. You may assume that it is always possible to reach the destination circle from the source circle.

---
## Sample Input

```
3
0 0 0 1
0 0 1 0
0 0 0 2
```

---
## Sample Output

```
Case 1: 1
Case 2: 2
Case 3: 3
```