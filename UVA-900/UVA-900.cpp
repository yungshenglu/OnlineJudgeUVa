#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
    long long int N;

    while (scanf("%lld", &N) != EOF && N != 0) {
        if (N < 4)
            printf("%lld\n", N);
        else {
            long long int a = 2, b = 3, brick;
            for (long long int i = 4; i <= N; ++i) {
                brick = a + b;
                a = b;
                b = brick;
            }

            // Print the result
            printf("%lld\n", brick);
        }
    }

    return 0;
}