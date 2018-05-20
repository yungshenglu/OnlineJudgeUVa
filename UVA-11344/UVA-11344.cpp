#include <cstdio>
#include <cstring>
#include <iostream>

#define MAX 1005

using namespace std;

bool wonderful(char *M, int N, int *n) {
    for (int i = 0; i < N; ++i) {
        int remain = 0;

        // Simulation the operation of division
        for (int j = 0; j < strlen(M); ++j) {
            remain = (remain * 10) + (M[j] - '0');
            remain = remain % n[i];
        }

        // Check whether it is divisible or not
        if (remain != 0)
            return false;
    }

    return true;
}

int main(void) {
    int T, N, n[13];
    char M[MAX];

    while (scanf("%d", &T) != EOF) {
        for (int t = 0; t < T; ++t) {
            scanf("%s", M);
            scanf("%d", &N);
            for (int i = 0; i < N; ++i)
                scanf("%d", &n[i]);

            // Print the result
            if (wonderful(M, N, n))
                printf("%s - Wonderful.\n", M);
            else
                printf("%s - Simple.\n", M);
        }
    }

    return 0;
}