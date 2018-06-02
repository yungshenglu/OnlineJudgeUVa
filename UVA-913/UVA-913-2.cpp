#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
    long long int N;

    while (scanf("%lld", &N) != EOF) {
        // Print the result
        printf("%lld\n", (3 * N * N + 6 * N + 3) / 2 - 9);
    }

    return 0;
}