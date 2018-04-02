/* This code is accepted only in C++11 5.3.0 */
#include <cstdio>
#include <iostream>
#include <queue>
#include <vector>

#define MAX 205

using namespace std;

vector< int > connection[MAX];

// Using BFS to traversal all the point and coloring
bool BFS(int start) {
    queue< int > que;
    que.push(start);

    int isVisited[MAX] = { 0 };
    while (!que.empty()) {
        // Get the point in the front of queue
        int curr = que.front();
        que.pop();

        for (int &next : connection[curr]) {
            if (!isVisited[next]) {
                // Push the next point into queue as been vidited
                que.push(next);

                // Color the next point determine by current point's color
                if (isVisited[curr] == 1)
                    isVisited[next] = 2;
                else
                    isVisited[next] = 1;
            }
            else if (isVisited[next] == isVisited[curr])
                return false;
        }
    }

    return true;
}

int main(void) {
    int T, I;

    while (scanf("%d", &T) != EOF) {
        // End of input
        if (T == 0) break;

        // Initialize connection vector to store the new case
        for(auto &vec : connection)
            vec.clear();

        scanf("%d", &I);

        int p1, p2;
        for (int i = 0; i < I; ++i) {
            scanf("%d %d", &p1, &p2);
            connection[p1].push_back(p2);
            connection[p2].push_back(p1);
        }

        // Print the result
        printf("%s\n", BFS(p1) ? "BICOLORABLE." : "NOT BICOLORABLE.");
    }

    return 0;
}