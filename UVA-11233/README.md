# UVA-11233 - Deli Deli

Mrs. Deli is running the delicatessen store “Deli Deli”. Last year Mrs. Deli has decided to expand her business and build up an online store. She has hired a programmer who has implemented the online store.
Recently some of her new online customers complained about the electronic bills. The programmer had forgotten to use the plural form in case that an item is purchased multiple times. Unfortunaly the programmer of Mrs. Deli is on holiday and now it is your task to implement this feature for Mrs. Deli. Here is a description how to make the plural form:
1. If the word is in the list of irregular words replace it with the given plural.
2. Else if the word ends in a consonant followed by "y", replace "y" with "ies".
3. Else if the word ends in "o", "s", "ch", "sh" or "x", append "es" to the word.
4. Else append "s" to the word.

---
## Input

The first line of the input consists of two integers $L$ and $N$ ($0 \le L \le 20$, $1 \le N \le 100$). The following $L$ lines contain the description of the irregular words and their plural form. Each line consists of two words separated by a space character, where the first word is the singular, the second word the plural form of some irregular word. After the list of irregular words, the following $N$ lines contain one word each, which you have to make plural. You may assume that each word consists of at most 20 lowercase letters from the english alphabet ("a" to "z").

---
## Output

Print N lines of output, where the i-th line is the plural form of the i-th input word.

---
## Sample Input

```
3 7
rice rice
spaghetti spaghetti
octopus octopi
rice
lobster
spaghetti
strawberry
octopus
peach
turkey
```

---
## Sample Output

```
rice
lobsters
spaghetti
strawberries
octopi
peaches
turkeys
```