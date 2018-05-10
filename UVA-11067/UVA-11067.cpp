#include <cstdio>
#include <iostream>

#define MAX 105

using namespace std;

int main(void) {
    int W, H, N, wx, wy;
    long long int path[MAX][MAX];

    while (scanf("%d %d", &W, &H) != EOF) {
        // End of input 
        if (W == 0 && H == 0)
            break;

        // Initialize the map as 0
        for (int i = 0; i <= H; ++i) {
            for (int j = 0; j <= W; ++j)
                path[i][j] = 0;
        }

        // Set the position of all wolves as -1 
        scanf("%d", &N);
        for (int i = 0; i < N; ++i) {
            scanf("%d %d", &wx, &wy);
            path[wy][wx] = -1;
        }

        // Find out all possible paths
        for (int i = 0; i <= H; ++i) {
            for (int j = 0; j <= W; ++j){
                // If there is a wolf, then set it as 0
                if (path[i][j] < 0)
                    path[i][j] = 0;
                else {
                    // Set the number of possible path
                    if (i == 0 && j == 0)
                        path[i][j] = 1;
                    else if (i == 0)
                        path[i][j] = path[i][j - 1];
                    else if (j == 0)
                        path[i][j] = path[i - 1][j];
                    else
                        path[i][j] = path[i][j - 1] + path[i - 1][j];
                }
            }
        }

        // Print the result
        if (path[H][W] == 0)
            printf("There is no path.\n");
        else if (path[H][W] == 1)
            printf("There is one path from Little Red Riding Hood's house to her grandmother's house.\n");
        else
            printf("There are %lld paths from Little Red Riding Hood's house to her grandmother's house.\n", path[H][W]);
    }

    return 0;
}