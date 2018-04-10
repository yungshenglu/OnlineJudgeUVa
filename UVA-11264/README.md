# UVA-11264 - Coin Collector

Our dear Sultan is visiting a country where there are n different types of coin. He wants to collect as many different types of coin as you can. Now if he wants to withdraw X amount of money from a Bank, the Bank will give him this money using following algorithm.

```
withdraw(X) {
    if (X == 0) return;
    Let Y be the highest valued coin that does not exceed X.
    Give the customer Y valued coin.
    withdraw(X - Y);
}
```

Now Sultan can withdraw any amount of money from the Bank. He should maximize the number of different coins that he can collect in a single withdrawal.

---
## Input

First line of the input contains $$T$$ the number of test cases. Each of the test cases starts with $$n$$
($$1 \le n \le 1,000$$), the number of different types of coin. Next line contains $$n$$ integers $$C_1$$, $$C_2$$, . . . , $$C_n$$ the value of each coin type. $$C_1 < C_2 < C_3 < . . . < C_n < 1,000,000,000$$. $$C_1$$ equals to $$1$$.

---
## Output

For each test case output one line denoting the maximum number of coins that Sultan can collect in a single withdrawal. He can withdraw infinite amount of money from the Bank.

---
## Sample Input

```
2
6
1 2 4 8 16 32
6
1 3 6 8 15 20
```

---
## Sample Output

```
6
4
```