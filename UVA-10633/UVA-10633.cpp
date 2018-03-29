#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
    long long int X;

    while (scanf("%lld", &X) != EOF && X) {
        int count = 0;

        // For sorting by increasing order
        for (int b = 9; b >= 0; --b) {
            if ((X - b) % 9 == 0) {
                if (count++)
                    printf(" ");
                
                // Get the N
                printf("%lld", (X - b) / 9 * 10 + b);
            }
        }
        printf("\n");
    }

    return 0;
}