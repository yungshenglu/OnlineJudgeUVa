# UVA-1650 - Number String

The signature of a permutation is a string that is computed as follows: for each pair of consecutive elements of the permutation, write down the letter `I` (increasing) if the second element is greater than the first one, otherwise write down the letter `D` (decreasing). For example, the signature of the permutation ${ 3, 1, 2, 7, 4, 6, 5 }$ is `DIIDID`.
Your task is as follows: You are given a string describing the signature of many possible permutations, find out how many permutations satisfy this signature. Note: For any positive integer $n$, a permutation of $n$ elements is a sequence of length $n$ that contains
each of the integers $1$ through $n$ exactly once.

---
## Input

Each test case consists of a string of $1$ to $1,000$ characters long, containing only the letters `I`, `D` or `?`, representing a permutation signature.
Each test case occupies exactly one single line, without leading or trailing spaces. Proceed to the end of file. The `?` in these strings can be either `I` or `D`.

---
## Output

For each test case, print the number of permutations satisfying the signature on a single line. In case the result is too large, print the remainder modulo $1,000,000,007$.
* **Hint:**
    * Permutation ${1, 2, 3}$ has signature `II`.
    * Permutations ${1, 3, 2}$ and ${2, 3, 1}$ have signature `ID`.
    * Permutations ${3, 1, 2}$ and ${2, 1, 3}$ have signature `DI`.
    * Permutation ${3, 2, 1}$ has signature `DD`.
    * `?D` can be either `ID` or `DD`.
    * `??` gives all possible permutations of length $3$.

---
## Sample Input

```
II
ID
DI
DD
?D
??
```

---
## Sample Output

```
1
2
2
1
3
6
```