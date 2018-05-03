# UVA-10721 - Bar Codes

A bar-code symbol consists of alternating dark and light bars, starting with a dark bar on the left. Each bar is a number of units wide. Figure 1 shows a bar-code symbol consisting of $4$ bars that extend over $1 + 2 + 3 + 1 = 7$ units. In general, the bar code $BC(n, k, m)$ is the set of all symbols with $k$ bars that together extend over exactly $n$ units, each bar being at most $m$ units wide. For instance, the symbol in Figure 1 belongs to $BC(7, 4, 3)$ but not to $BC(7, 4, 2)$. Figure 2 shows all $16$ symbols in $BC(7, 4, 3)$. Each `1` represents a dark unit, each `0` a light unit.

<img src="https://i.imgur.com/GPeVUAS.png" width="250" />

Figure 1: Bar-code over $7$ units with $4$ bars

<img src="https://i.imgur.com/zIYEf55.png" width="500" />

Figure 2: All symbols of $BC(7, 4, 3)$

---
## Input

Each input will contain three positive integers $n$, $k$, and $m$ ($1 \le n, k, m \le 50$).

---
## Output

For each input print the total number of symbols in $BC(n, k, m)$. Output will fit in $64$-bit signed integer.

---
## Sample Input

```
7 4 3
7 4 2
```

---
## Sample Output

```
16
4
```