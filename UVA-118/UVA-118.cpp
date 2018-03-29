#include <cstdio>
#include <iostream>
#include <string>

#define MAX 55
#define CH_MAX 105

using namespace std;

const char orientation[4] = { 'N', 'E', 'S', 'W' };
const int moving[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };

typedef struct position {
    int x;
    int y;
    int dir;
    char ori;
} Position;

int main(void) {
    int X, Y, map[MAX][MAX] = { 0 };
    Position robot;

    scanf("%d %d", &X, &Y);
    while (scanf("%d %d %c", &robot.x, &robot.y, &robot.ori) != EOF) {
        // Define each orientation with a index number
        for (int i = 0; i < 4; ++i) {
            if (robot.ori == orientation[i]) {
                robot.dir = i;
                break;
            }
        }

        char instr[CH_MAX];
        scanf("%s", instr);

        // Robot start to walk
        bool isLost = 0;
        for (int i = 0; instr[i]; ++i) {
            if (instr[i] == 'R') {
                // Rotate the direction clcokwise
                robot.dir = (robot.dir + 1) % 4;
                robot.ori = orientation[robot.dir];
            }
            else if (instr[i] == 'L') {
                // Rotate the direction counterclockwise
                robot.dir = (robot.dir + 3) % 4;
                robot.ori = orientation[robot.dir];
            }
            else if (instr[i] == 'F') {
                //  Get the next position after moving forward
                int nextX = robot.x + moving[robot.dir][0];
                int nextY = robot.y + moving[robot.dir][1];

                // Determine whether the robot is out of bound
                if (nextX < 0 || nextX > X || nextY < 0 || nextY > Y) {
                    // Pass current instruction if the next position is blocked
                    if (map[robot.x][robot.y] < 0)
                        continue;

                    isLost = 1;
                    // Let the position before robot out of bound become blocked
                    map[robot.x][robot.y] = -1;
                    break;
                }
                
                // Moving to the next position
                robot.x = nextX;
                robot.y = nextY;
            }
        }

        // Print the final position and orientation of robot
        if (isLost)
            printf("%d %d %c LOST\n", robot.x, robot.y, robot.ori);
        else
            printf("%d %d %c\n", robot.x, robot.y, robot.ori);
    }

    return 0;
}