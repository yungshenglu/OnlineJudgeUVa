# UVA-499 - What's The Frequency, Kenneth?

```
#include <stdio.h>

main()
{
    int i;
    char *suffix[]= { "st", "nd", "rd" };
    char *item[]= { "Unix" , "cat", "sed", "awk", "grep", "ed", "vi"};
    printf("In the beginning, there was nothing.\n");
    for (i = 0; i < 7; i++)
        printf("And on the %d%s day, God created %s. And it was good.\n",
            i + 1, (i < 3) ? suffix[i] : "th", item[i]);
}
```
But then God saw that vi led people into temptation. Instead of choosing the righteous ways of make, dbx, and RCS, people used long command lines, printf(), and tape backups.
So God decreed, “I see that Engineers have thus defiled my vi. And so, I shall create emacs, an editor more powerful than words. Further, for each instantiation vi hitherto, the Engineer responsible shalt perform Penance. And lo, the Penance wilt be painful; there will be much wailing and gnushingof teeth. The Engineer will read many lines of text. For each line of text, the Engineer must tell me which letters occur the most frequently.”
“I charge you all with My Golden Rule: ’Friends shalt not let friends use vi’.”

---
## Input

The input file consists of a lot of lines of text.

---
## Output

A line of output should contain a list of letters that all occured with the highest frequency in the corresponding input line, followed by the frequency. The list of letters should be an alphabetical list of upper case letters followed by an alphabetical list of lower case letters.

---
## Sample Input

```
When riding your bicycle backwards down a one-way street, if the
wheel falls of a canoe, how many ball bearings does it take to fill
up a water buffalo?
Hello Howard.
```

---
## Sample Output

```
e 6
al 7
a 3
Hlo 2
```