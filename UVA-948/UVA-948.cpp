#include <cstdio>
#include <iostream>

#define MAX 40

using namespace std;

int main(void) {
    int N, Fib[MAX] = { 0 };

    // Generate Fibonacci series
    Fib[0] = 0, Fib[1] = 1;
    for (int i = 2; i < MAX; ++i)
        Fib[i] = Fib[i - 1] + Fib[i - 2];

    while (scanf("%d", &N) != EOF) {
        int DEC;

        for (int n = 0; n < N; ++n) {
            scanf("%d", &DEC);
            printf("%d = ", DEC);

            // Convert into Fibonacci base and print the result
            bool isDivided = false;
            for (int i = 39; i > 1; --i) {
                if (DEC >= Fib[i]) {
                    DEC -= Fib[i];
                    isDivided = true;
                    printf("1");
                }
                else if (isDivided)
                    printf("0");
            }
            printf(" (fib)\n");
        }
    }

    return 0;
}