#include <cstdio>
#include <iostream>

#define MAX 1300000

using namespace std;

int main(void) {
    int N, prime[MAX] = { 0 };

    // Define prime number table
    prime[0] = prime[1] = 1;
    for (int i = 2; i < MAX; ++i) {
        if (!prime[i]) {
            for (int j = i + i; j < MAX; j += i)
                prime[j] = 1;
        }
    }

    while (scanf("%d", &N) != EOF && N != 0) {
        int gap = 0;
        for (int i = N; prime[i]; --i)
            ++gap;
        for (int i = N; prime[i]; ++i)
            ++gap;

        // Print the result
        printf("%d\n", gap);
    }

    return 0;
}