#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>

#define MAX 1005

using namespace std;

typedef struct position {
    int x;
    int y;
} Position;

// Define all moving direction
int direction[4][2] = {
    { 1, 0 },
    { -1, 0 },
    { 0, 1 },
    { 0, -1 }
};

// Initialize all the start position of fire
vector< queue<Position> > firePosition;

// Initialize maze and size
int maze[MAX][MAX] = { 0 };
int R, C = 0;

int BFS(Position Joe) {
    // Initialize Joe position and push current position
    queue<Position> JoePosition;
    JoePosition.push(Joe);

    int minute;
    Position curr, next;
    while (!JoePosition.empty()) {
        // Let all fire position moving 
        for (int i = 0; i < firePosition.size(); ++i) {
            if (!firePosition[i].empty()) {
                curr = firePosition[i].front();
                minute = maze[curr.x][curr.y];
            }

            while (!firePosition[i].empty()) {
                curr = firePosition[i].front();

                // Let Joe's turn to move
                if (maze[curr.x][curr.y] != minute)
                    break;

                for (int x = 0; x < 4; ++x) {
                    next.x = curr.x + direction[x][0];
                    next.y = curr.y + direction[x][1];

                    // Check whether the next position is out of bound
                    if (next.x < 0 || next.x >= R || next.y < 0 || next.y >= C)
                        continue;

                    if (maze[next.x][next.y] == 0) {
                        maze[next.x][next.y] = maze[curr.x][curr.y] - 1;
                        firePosition[i].push(next);
                    }
                }
                firePosition[i].pop();
            }
        }

        // Let Joe moving
        curr = JoePosition.front();
        minute = maze[curr.x][curr.y];
        while (!JoePosition.empty()) {
            curr = JoePosition.front();

            // Let fire' turn to move
            if (maze[curr.x][curr.y] != minute)
                break;
            
            for (int x = 0; x < 4; ++x) {
                next.x = curr.x + direction[x][0];
                next.y = curr.y + direction[x][1];

                // Check whether the next position is out of bound
                if (next.x < 0 || next.x >= R || next.y < 0 || next.y >= C)
                    return maze[curr.x][curr.y];
                
                if (maze[next.x][next.y] == 0) {
                    maze[next.x][next.y] = maze[curr.x][curr.y] + 1;
                    JoePosition.push(next);
                }
            }
            JoePosition.pop();
        }
    }

    return -1;
}

int main(void) {
    int T = 0;
    char mazeLine[MAX];

    scanf("%d", &T);
    while (T--) {
        Position Joe;
        firePosition.clear();

        // Build the map for each input
        scanf("%d %d", &R, &C);
        for (int i = 0; i < R; ++i) {
            scanf("%s", mazeLine);
            for (int j = 0; j < C; ++j) {
                if (mazeLine[j] == '#')
                    maze[i][j] = -1;
                else if (mazeLine[j] == '.')
                    maze[i][j] = 0;
                else if (mazeLine[j] == 'J') {
                    maze[i][j] = 1;
                    Joe.x = i;
                    Joe.y = j;
                }
                else if (mazeLine[j] == 'F') {
                    maze[i][j] = -2;
                    queue<Position> currFirePosition;
                    Position curr = { i, j };
                    currFirePosition.push(curr);
                    firePosition.push_back(currFirePosition);
                }
            }
        }

        // Using BFS to find the solution
        int minute = BFS(Joe);
        if (minute == -1)
            printf("IMPOSSIBLE\n");
        else
            printf("%d\n", minute);
    }

    return 0;
}