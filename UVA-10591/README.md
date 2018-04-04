# UVA-10591 - Happy Number

Let the sum of the square of the digits of a positive integer $$S_0$$ be represented by $$S_1$$. In a similar way, let the sum of the squares of the digits of $$S_1$$ be represented by $$S_2$$ and so on. If $$S_i = 1$$ for some $$i \ge 1$$, then the original integer $$S_0$$ is said to be Happy number. A number, which is not happy, is called Unhappy number. For example $$7$$ is a Happy number since $$7$$ → $$49$$ → $$97$$ → $$130$$ → $$10$$ → $$1$$ and $$4$$ is an Unhappy number since $$4$$ → $$16$$ → $$37$$ → $$58$$ → $$89$$ → $$145$$ → $$42$$ → $$20$$ → $$4$$.

---
## Input

The input consists of several test cases, the number of which you are given in the first line of the input. Each test case consists of one line containing a single positive integer $$N$$ smaller than $$109$$.

---
## Output

For each test case, you must print one of the following messages:
```
Case #p: N is a Happy number.
Case #p: N is an Unhappy number.
```
Here $$p$$ stands for the case number (starting from $$1$$). You should print the first message if the number $$N$$ is a happy number. Otherwise, print the second line.

---
## Sample Input

```
3
7
4
13
```

---
## Sample Output

```
Case #1: 7 is a Happy number.
Case #2: 4 is an Unhappy number.
Case #3: 13 is a Happy number.
```