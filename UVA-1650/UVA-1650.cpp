#include <cstdio>
#include <cstring>
#include <iostream>

#define MAX 1050
#define MOD 1000000007

using namespace std;

int main(void) {
    long long int DP[MAX][MAX], sum[MAX][MAX];
    char str[MAX];

    while (scanf("%s", str) != EOF) {
        int n = strlen(str) + 1;

        // Initialize DP table
        memset(DP, 0, sizeof(DP));
        memset(sum, 0, sizeof(sum));
        DP[1][1] = sum[1][1] = 1;

        // Use DP to find out all possible cases
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                // Increase case
                if (str[i - 2] == 'I' || str[i - 2] == '?')
                    DP[i][j] = (DP[i + 1][j] + sum[i][j - 1]) % MOD;
                // Decrease case
                else if (str[i - 2] == 'D' || str[i - 2] == '?')
                    DP[i][j] = (DP[i][j] + sum[i - 1][i - 1] - sum[i - 1][j - 1]) % MOD;
                sum[i][j] = (sum[i][j - 1] + DP[i][j]) % MOD;
            }
        }
        
        // Print the result
        printf("%d\n", (sum[n][n] + MOD) % MOD);
    }
    
    return 0;
}