#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>

#define MAX 25
#define TAPE 1000

using namespace std;

// DP table: store 
int CD[TAPE][MAX];

/* Print all tracks of CD */
void printTracks(int tracks[], int i, int j) {
    if (i == 0 || j == 0)
        return;
    
    if (CD[i][j] == CD[i][j - 1])
        printTracks(tracks, i, j - 1);
    else {
        printTracks(tracks, i - tracks[j], j - 1);
        printf("%d ", tracks[j]);
    }
}

int main(void) {
    int N, C;

    while (scanf("%d %d", &N, &C) != EOF) {
        int tracks[MAX];
        for (int c = 1; c <= C; ++c)
            scanf("%d", &tracks[c]);
        
        // Use DP to solve the 0/1 knapsack problem
        int CD[TAPE][MAX] = { 0 };
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= C; ++j) {
                if (tracks[j] <= i)
                    CD[i][j] = max(CD[i - tracks[j]][j - 1] + tracks[j], CD[i][j - 1]);
                else
                    CD[i][j] = CD[i][j - 1];
            }
        }

        // Print the result
        printTracks(tracks, N, C);
        printf("sum:%d\n", CD[N][C]);
    }

    return 0;
}