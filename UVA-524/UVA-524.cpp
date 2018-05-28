#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>

#define MAX 16
#define PRIME 11

using namespace std;

// Build a table to store all prime number under 32
int prime[PRIME] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 };

// Backtracking
bool isSelected[MAX] = { false };

/* Determine whether the number is prime */
bool isPrime(int n) {
    for (int i = 0; i < PRIME; ++i) {
        if (n == prime[i])
            return true;
    }
    return false;
}

/* Backtracking Method */
void backtracking(int n, vector<int> solution) {
    // Bound
    if (solution.size() == n) {
        // Check the sum of the end and begin one is still prime
        if (!isPrime(solution.front() + solution.back()))
            return;
        
        // Print the result
        printf("1");
        for (int i = 1; i < solution.size(); ++i)
            printf(" %d", solution[i]);
        printf("\n");
        return;
    }

    // Backtracking
    for (int i = 2; i <= n; ++i) {
        if (!isSelected[i] && isPrime(i + solution.back())) {
            isSelected[i] = true;
            solution.push_back(i);

            backtracking(n, solution);

            isSelected[i] = false;
            solution.pop_back();
        }
    }
}

int main(void) {
    int N, T = 0;

    while (scanf("%d", &N) != EOF) {
        // Output format
        if (T++) printf("\n");

        vector<int> solution;
        memset(isSelected, MAX, false);

        printf("Case %d:\n", T);

        // Use backtracking to find out all possible solutions
        solution.push_back(1);
        backtracking(N, solution);
    }

    return 0;
}