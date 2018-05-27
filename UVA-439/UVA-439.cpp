#include <cstdio>
#include <iostream>
#include <string>
#include <queue>

using namespace std;

typedef struct POS {
    int x;
    int y;
    int steps;
} Position;

// Define all moving direction for knight
int direction[8][2] = {
    { 1, 2 }, 
    { 2, 1 },
    { 2, -1 },
    { 1, -2 },
    { -1, -2 },
    { -2, -1 },
    { -2, 1 },
    { -1, 2 }
};

int BFS(Position src, Position dst) {
    // If the src is same as the dst point
    if (src.x == dst.x && src.y == dst.y)
        return src.steps;

    bool isVisited[8][8] = { false };
    queue< Position > que;
    que.push(src);

    while (!que.empty()) {
        Position curr = que.front();
        isVisited[curr.x][curr.y] = true;
        que.pop();

        // Try all direction from the current point
        Position next;
        for (int i = 0; i < 8; ++i) {
            //printf("isVisited: %d\n", isVisited[curr.x][curr.y]);
            next.x = curr.x + direction[i][0];
            next.y = curr.y + direction[i][1];
            next.steps = curr.steps + 1;

            if ((next.x >= 0 && next.x < 8) && (next.y >= 0 && next.y < 8) && !isVisited[next.x][next.y]) {
                isVisited[next.x][next.y] = true;
                if (next.x == dst.x && next.y == dst.y) {
                    return next.steps;
                }
                que.push(next);
            }
        }
    }

    return 0;
}

int main(void) {
    string str1, str2;
    Position src, dst;

    while (cin >> str1 >> str2) {
        src.x = str1[0] - 'a';
        src.y = str1[1] - '1';
        src.steps = 0;
        dst.x = str2[0] - 'a';
        dst.y = str2[1] - '1';

        // Using BFS to find out the total moving steps
        cout << "To get from " << str1 << " to " << str2 << " takes " << BFS(src, dst) << " knight moves.\n";
    }

    return 0;
}