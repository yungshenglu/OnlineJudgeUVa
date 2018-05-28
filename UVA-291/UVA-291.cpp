/* This code is accepted only in C++11 5.3.0 */

#include <cstdio>
#include <iostream>
#include <vector>

#define MAX 5
#define SOL 9

using namespace std;

// Determine whether the link is visited
bool isVisited[MAX][MAX] = { false };

// Build the map of house drawing
vector<int> link[MAX] = { { 1, 2, 4 }, { 0, 2, 4 }, { 0, 1, 3, 4 }, { 2, 4 }, { 0, 1, 2, 3 } };

// Store the current solution
vector<int> solution;

/* Backtracking Method */
void backtracking(int x) {
    // Bound
    if (solution.size() == SOL) {
        // Print the current solution without last one
        for (int i = 0; i < SOL; ++i)
            printf("%d", solution[i] + 1);
        printf("\n");
    }

    // Backtracking
    for (int i = 0; i < link[x].size(); ++i) {
        int y = link[x][i];
        if (!isVisited[x][y] && !isVisited[y][x]) {
            // Mark as visited and push into solution
            isVisited[x][y] = isVisited[y][x] = true;
            solution.push_back(y);

            backtracking(y);

            // Return to current status (pop out the current solution)
            isVisited[x][y] = isVisited[y][x] = false;
            solution.pop_back();
        }
    }
}

int main(void) {
    // Initial from point 1
    solution.push_back(0);

    // Use backtracking to find out all possible solitions
    backtracking(0);

    return 0;
}
