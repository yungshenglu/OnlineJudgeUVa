#include <cstdio>
#include <iostream>

#define MAX 10000

using namespace std;

int method[MAX] = { 0 };
int cent[5] = { 1, 5, 10, 25, 50 };

int main(void) {
    int amount;

    // Initialize the amount is zero
    method[0] = 1;
    
    // Generate the table for each case number of cents
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 7491; ++j)
            method[j + cent[i]] += method[j];
    }

    while (scanf("%d", &amount) != EOF) {
        // Print the result
        printf("%d\n", method[amount]);
    }

    return 0;
}