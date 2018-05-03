#include <cstdio>
#include <iostream>

#define MAX 60

using namespace std;

int main(void) {
    int n, k, m;

    while (scanf("%d %d %d", &n, &k, &m) != EOF) {
        // Initialize DP table
        long long int BC[MAX][MAX] = { 0 };

        BC[0][0] = 1;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= k; ++j) {
                for (int p = 1; p <= m && p <= i; ++p) {
                    BC[i][j] += BC[i - p][j - 1];
                }
            }
        }

        // print the result
        printf("%lld\n", BC[n][k]);
    }

    return 0;
}