# UVA-865 - Substitution Cypher

Substitution cyphers are the simplest of cyphers where the letters of one alphabet are substituted for the letters of another alphabet. In one form or another, they’ve been in use for over $2000$ years.

---
## Input

The input begins with a single positive integer on a line by itself indicating the number of the cases following, each of them as described below. This line is followed by a blank line, and there is also a blank line between two consecutive inputs.
* a line containing the plaintext alphabet
* a line containing the substitution alphabet
* several lines of text

---
## Output

For each test case, the output must follow the description below. The outputs of two consecutive cases will be separated by a blank line.
* a line containing the substitution alphabet
* a line containing the plaintext alphabet
* the converted lines of text

**Please note:** All lines will be at most $64$ characters, plus a trailing end-of-line character. Pass through all characters not found in the plaintext alphabet.

---
## Sample Input

```
1
abcdefghijklmnopqrstuvwxyz
zyxwvutsrqponmlkjihgfedcba
Shar's Birthday:
The birthday is October 6th, but the party will be Saturday,
October 5. It's my 24th birthday and the first one in some
years for which I've been employed. Plus, I have new clothes.
So I have cause to celebrate. More importantly, though,
we've cleaned the house! The address is 506-D Albert Street.
Extra enticement for CS geeks: there are several systems in
the house, and the party is conveniently scheduled for 3 hours
after the second CSC programming contest ends (not to mention,
within easy walking distance)!
```

---
## Sample Output

```
zyxwvutsrqponmlkjihgfedcba
abcdefghijklmnopqrstuvwxyz
Sszi'h Brigswzb:
Tsv yrigswzb rh Oxglyvi 6gs, yfg gsv kzigb droo yv Szgfiwzb,
Oxglyvi 5. Ig'h nb 24gs yrigswzb zmw gsv urihg lmv rm hlnv
bvzih uli dsrxs I'ev yvvm vnkolbvw. Pofh, I szev mvd xolgsvh.
Sl I szev xzfhv gl xvovyizgv. Mliv rnkligzmgob, gslfts,
dv'ev xovzmvw gsv slfhv! Tsv zwwivhh rh 506-D Aoyvig Sgivvg.
Ecgiz vmgrxvnvmg uli CS tvvph: gsviv ziv hvevizo hbhgvnh rm
gsv slfhv, zmw gsv kzigb rh xlmevmrvmgob hxsvwfovw uli 3 slfih
zugvi gsv hvxlmw CSC kiltiznnrmt xlmgvhg vmwh (mlg gl nvmgrlm,
drgsrm vzhb dzoprmt wrhgzmxv)!
```