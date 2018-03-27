#include <cstdio>
#include <iostream>
#include <queue>

#define MAX 35

using namespace std;

char dungeon[MAX][MAX][MAX];
int dist[MAX][MAX][MAX];
const int direction[6][3] = { {-1, 0, 0}, {1, 0, 0}, {0, -1, 0}, {0, 1, 0}, {0, 0, -1}, {0, 0, 1}};
int L, R, C;

typedef struct point {
    int x;
    int y;
    int z;
} Point;

int BFS(int i, int j, int k) {
    // Let the starting point's distance is 0
    dist[i][j][k] = 0;

    // Push the current point into queue and change this point into block on dungeon
    Point curr = { i, j, k };
    queue< Point > que;
    que.push(curr);
    dungeon[i][j][k] = '#';

    // Find the possible next point by BFS
    Point next;
    while (!que.empty()) {
        curr = que.front();
        que.pop();

        for (int i = 0; i < 6; ++i) {
            // Get the all possible next point by adding add direction
            next.x = curr.x + direction[i][0];
            next.y = curr.y + direction[i][1];
            next.z = curr.z + direction[i][2];

            // Check if the next point out of the bound
            if (next.x < 0 || next.x >= L || next.y < 0 || next.y >= R || next.z < 0 || next.z >= C)
                continue;
            
            // Check if the next point is blocked
            if (dungeon[next.x][next.y][next.z] != '#') {
                // Update the distance of the next point
                dist[next.x][next.y][next.z] = dist[curr.x][curr.y][curr.z] + 1;

                // Arrive the end of the dungeon
                if (dungeon[next.x][next.y][next.z] == 'E')
                    return dist[next.x][next.y][next.z];
                
                // Push the next point into queue and change this point into block on dungeon
                dungeon[next.x][next.y][next.z] = '#';
                que.push(next);
            }
        }
    }

    return -1;
}

int main(void) {
    while (scanf("%d %d %d", &L, &R, &C) != EOF) {
        // End of input
        if (!L && !R && !C)
            break;
        
        // Define the start point
        int start_i, start_j, start_k;
        
        for (int i = 0; i < L; ++i) {
            for (int j = 0; j < R; ++j) {
                scanf("%s", dungeon[i][j]);
                for (int k = 0; k < C; ++k) {
                    if (dungeon[i][j][k] == 'S') {
                        start_i = i;
                        start_j = j;
                        start_k = k;
                    }
                }
            }
        }

        // Use BFS to find the route
        int minute = BFS(start_i, start_j, start_k);

        // Print the result
        if (minute != -1)
            printf("Escaped in %d minute(s).\n", minute);
        else
            printf("Trapped!\n");
    }

    return 0;
}