#include <cstdio>
#include <iostream>

using namespace std;

int knights(int N, int M) {
    // Let the M be the smallest one of both M and N
    if (M > N) swap(M, N);

    // If M = 1, then we can place the knight in each block
    if (M == 1)
        return N;
    // If M = 2, then we can place only 4 knights in each 2 * 4 blocks
    else if (M == 2)
        return (N / 4) * 4 + ((N % 4 < 3) ? (N % 4) * 2 : 4);
    // Else we can place each knights with separetly row and column
    else
        return (M * N + 1) / 2;
}

int main(void) {
    int N, M;

    while (scanf("%d %d", &N, &M) != EOF && N > 0 && M > 0) {
        // Print the result
        printf("%d knights may be placed on a %d row %d column board.\n", knights(N, M), N, M);
    }

    return 0;
}