#include <cstdio>
#include <iostream>

#define MAX 1005

using namespace std;

// Use greedy method to choose the coin
int withdraw(int N, int c[]) {
    // Start from the smallest coin, and must choose c[0] and c[N - 1]
    int sum = c[0], count = 2;

    for (int i = 0; i < N - 1; ++i) {
        // The current sum must less than the possible chose coin
        if (sum < c[i] && sum + c[i] < c[i + 1]) {
            sum += c[i];
            ++count;
        }
    }

    return count;
}

int main(void) {
    int T, N, c[MAX];

    while (scanf("%d", &T) != EOF) {
        for (int t = 0; t < T; ++t) {
            scanf("%d", &N);
            for (int i = 0; i < N; ++i)
                scanf("%d", &c[i]);
            
            
            if (N < 3) {
                // If the types of coin is less than 3, then must choose all of them
                printf("%d\n", N);
            }
            else {
                // Print the result
                printf("%d\n", withdraw(N, c));
            }
        }
    }

    return 0;
}