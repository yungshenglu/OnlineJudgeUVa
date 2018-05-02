#include <iostream>
#include <cstdio>
#include <algorithm>

#define MAX 120

using namespace std;

int main(void) {
    int N1, N2, T = 1;
    int tower1[MAX], tower2[MAX];

    while (scanf("%d %d", &N1, &N2) != EOF && (N1 | N2)) {
        int tiles[MAX][MAX];

        for (int i = 1; i <= N1; ++i)
            scanf("%d", &tower1[i]);
        for (int i = 1; i <= N2; ++i)
            scanf("%d", &tower2[i]);

        // Initialize DP tables
        for (int i = 0; i <= N1; ++i)
            tiles[i][0] = 0;
        for (int j = 0; j <= N2; ++j)
            tiles[0][j] = 0;

        // Get the length of Longest Common Sequence (LCS)
        for (int i = 1; i <= N1; ++i) {
            for (int j = 1; j <= N2; ++j) {
                if (tower1[i] == tower2[j])
                    tiles[i][j] = tiles[i - 1][j - 1] + 1;
                else
                    tiles[i][j] = max(tiles[i - 1][j], tiles[i][j - 1]);
            }
        }

        // Print the result
        printf("Twin Towers #%d\n", T++);
        printf("Number of Tiles : %d\n\n", tiles[N1][N2]);
    }

    return 0;
}