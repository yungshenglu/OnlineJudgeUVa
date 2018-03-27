#include <cstdio>
#include <iostream>

#define MAX 205

using namespace std;

char board[MAX][MAX];
const int direction[6][2] = { {-1, -1}, {-1, 0}, {0, -1}, {0, 1}, {1, 0}, {1, 1} };
int N;

void DFS(int i, int j, char ch, bool &win) {
    // Set the current position into symbol '#' as blocked
    board[i][j] = '#';

    // Determine whether the "white" is win
    if (ch == 'b' && i == N - 1)
        win = 1;
    
    // Determine whether the "black" is win
    if (ch == 'w' && j == N - 1)
        win = 0;

    // Find all the next position in all direction
    for (int n = 0; n < 6; ++n) {
        // Get the next position
        int next_i = i + direction[n][0];
        int next_j = j + direction[n][1];

        // Check whether the next position is out of bound
        if (next_i < 0 || next_i >= N || next_j < 0 || next_j >= N)
            continue;
        
        // Use DFS to find the next position
        if (board[next_i][next_j] == ch)
            DFS(next_i, next_j, ch, win);
    }
}

int main(void) {
    int T = 1;
    
    while (scanf("%d", &N) != EOF) {
        // End of input
        if (!N) break;
        
        // Store the input board
        for (int i = 0; i < N; ++i)
            scanf("%s", board[i]);
        
        bool win = 0;

        // Determine whether the "white" is win
        for (int i = 0; i < N; ++i) {
            if (board[i][0] == 'w')
                DFS(i, 0, 'w', win);
        }

        // Determine whether the "black" is win
        for (int j = 0; j < N; ++j) {
            if (board[0][j] == 'b')
                DFS(0, j, 'b', win);
        }       

        // Print the result
        if (win)
            printf("%d B\n", T++);
        else
            printf("%d W\n", T++);
    }

    return 0;
}