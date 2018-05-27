#include <cstdio>
#include <iostream>

#define MAX 25

using namespace std;

int DFS(int curr, bool map[MAX][MAX], bool isVisited[MAX][MAX], int distance) {
    int longest = 0;

    for (int next = 0; next < MAX; ++next) {
        if (map[curr][next] && !isVisited[curr][next]) {
            // Let the bi-directional from curr to next closed
            isVisited[curr][next] = true;
            isVisited[next][curr] = true;

            int length = DFS(next, map, isVisited, distance + 1);
            if (length > longest)
                longest = length;

            // Let the bi-directional from curr to next opened
            isVisited[curr][next] = false;
            isVisited[next][curr] = false;
        }
    }

    // Return current distance if it cannot move to next point
    if (longest == 0)
        return distance;
    return longest;
}

int main(void) {
    int N, M, x, y;

    while (scanf("%d %d", &N, &M) != EOF && N > 0 && M > 0) {
        // Build the map for all links
        bool map[MAX][MAX] = { false };
        for (int m = 0; m < M; ++m) {
            scanf("%d %d", &x, &y);
            map[x][y] = map[y][x] = true;
        }

        int longestDistance = 0;
        bool isVisited[MAX][MAX] = { false };
        for (int n = 0; n < N; ++n) {
            // Use DFS to find the longest path
            int distance = DFS(n, map, isVisited, 0);

            // Get the longest distance
            if (distance > longestDistance)
                longestDistance = distance;
        }

        // Print the result
        printf("%d\n", longestDistance);
    }

    return 0;
}
