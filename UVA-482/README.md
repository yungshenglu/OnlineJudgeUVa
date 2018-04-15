# UVA-482 - Permutation Arrays

In many computer problems, it is necessary to permute data arrays. That is, the data in an array must be re-arranged in some specified order. One way to permute arbitrary data arrays is to specify the permutations with an index array to point out the position of the elements in the new array. Let $x$ be an array that is to be permuted and let $x'$ be the permuted array. Then, we have the relationship between $x$ and $x'$ that $x'_{p_i} = x_i$.

---
## Input

The input begins with a single positive integer on a line by itself indicating the number of the cases following, each of them as described below. This line is followed by a blank line, and there is also a blank line between two consecutive inputs.
Each input set will contain two lines of numbers. The first line will be an index array $p$ containing the integers $1$, ... $n$, where $n$ is the number of integers in the list. The numbers in the first line will have been permuted in some fashion. The second line will contain a list numbers in floating point format.

---
## Output

For each test case, the output must follow the description below. The outputs of two consecutive cases will be separated by a blank line.
The output for this program will be the list of floating point numbers from the input set, ordered according to the permutation array from the input file. The output numbers must be printed one per line in the same format in which they each appeared in the input file.

---
## Sample Input

```
1
3 1 2
32.0 54.7 -2
```

---
## Sample Output

```
54.7
-2
32.0
```