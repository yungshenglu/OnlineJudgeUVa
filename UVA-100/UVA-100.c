/* Compile error */

#include <stdio.h>

/* Calculate the cycle length */
int cycleLength(int n) {
    if (n != 1) {
        return 1 + ((n % 2) ? cycleLength(3 * n + 1) : cycleLength(n / 2));
    } else {
        return 1;
    }
}

int main(void) {
    int i, j, min_i_j, max_i_j;
    int term_length, max_length;

    while (scanf("%d %d", &i, &j) != EOF) {
        max_length = 0;

        // Get the greatest and lowest value in i and j
        min_i_j = (i < j) ? i : j;
        max_i_j = (i > j) ? i : j;

        while (min_i_j <= max_i_j) {
            term_length = cycleLength(min_i_j);
            max_length = (term_length > max_length) ? term_length : max_length;
            ++min_i_j;
        }

        // Output results
        printf("%d %d %d\n", i, j, max_length);   
    }
    
    return 0;
}