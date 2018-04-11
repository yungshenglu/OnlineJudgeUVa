#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {
    int T, N, currNum, digit;

    while (scanf("%d", &T) != EOF) {
        for (int t = 0; t < T; ++t) {
            scanf("%d", &N);

            int count[10] = { 0 };
            for (int i = 1; i <= N; ++i) {
                currNum = i;

                // Count the number of each digit in current number
                while (currNum != 0) {
                    digit = currNum % 10;
                    ++count[digit];
                    currNum /= 10;
                }
            }

            // Print the result
            printf("%d", count[0]);
            for (int i = 1; i < 10; ++i)
                printf(" %d", count[i]);
            printf("\n");
        }
    }

    return 0;
}