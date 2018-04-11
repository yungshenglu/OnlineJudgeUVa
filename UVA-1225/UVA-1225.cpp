#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {
    int T, N;

    while (scanf("%d", &T) != EOF) {
        for (int t = 0; t < T; ++t) {
            scanf("%d", &N);

            for (int i = 0; i <= 9; ++i) {
                int value = N, digit = 1, number = 0, last = 0;

                while (value > 0) {
                    // Calculate number of 0
                    if (i == 0) {
                        if (value % 10 == i)
                            number += ((value / 10 - 1) * digit + last + 1);
                        else
                            number += ((value / 10) * digit);
                    }
                    // Calculate number of 1 to 9
                    else {
                        if (value % 10 < i) {
                            number += ((value / 10) * digit);
                        }
                        else if (value % 10 == i) {
                            number += ((value / 10) * digit + last + 1);
                        }
                        else {
                            number += ((value / 10 + 1) * digit);
                        }
                    }

                    // Get to the next digit in each iteration
                    last += (value % 10) * digit;
                    value /= 10;
                    digit *= 10;
                }

                // Print the result
                if (i > 0)
                    printf(" ");
                printf("%d", number);
            }

            printf("\n");
        }
    }

    return 0;
}