#include <cstdio>
#include <iostream>

#define MAX 30

using namespace std;

char image[MAX][MAX];

void DFS(int &n, int i, int j) {
    // Mark the current pixels when it has been found
    image[i][j] = '0';

    // Consider the case in up, down, left, and right
    if (i - 1 >= 0 && image[i - 1][j] == '1')
        DFS(n, i - 1, j);
    if (i + 1 < n && image[i + 1][j] == '1')
        DFS(n, i + 1, j);
    if (j - 1 >= 0 && image[i][j - 1] == '1')
        DFS(n, i, j - 1);
    if (j + 1 < n && image[i][j + 1] == '1')
        DFS(n, i, j + 1);
    
    // Consider the case in diagonal
    if (i - 1 >= 0 && j - 1 >= 0 && image[i - 1][j - 1] == '1')
        DFS(n, i - 1, j - 1);
    if (i - 1 >= 0 && j + 1 < n && image[i - 1][j + 1] == '1')
        DFS(n, i - 1, j + 1);
    if (i + 1 < n && j - 1 >= 0 && image[i + 1][j - 1] == '1')
        DFS(n, i + 1, j - 1);
    if (i + 1 < n && j + 1 < n && image[i + 1][j + 1] == '1')
        DFS(n, i + 1, j + 1);
}

int main(void) {
    int n, t = 1, num = 0;

    while (scanf("%d", &n) != EOF) {
        // Pass the next line character
        getchar();

        for (int i = 0; i < n; ++i)
            scanf("%s", image[i]);
        
        num = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                // Use DFS to find the number of war eagles
                if (image[i][j] == '1') {
                    DFS(n, i, j);
                    ++num;
                }
            }
        }

        // Print the result
        printf("Image number %d contains %d war eagles.\n", t++, num);
    }

    return 0;
}