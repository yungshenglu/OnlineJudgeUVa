#include <cstdio>
#include <iostream>
#include <algorithm>

#define MAX 55

using namespace std;

int main(void) {
    int N, L;

    while (scanf("%d", &N) != EOF) {
        for (int i = 0; i < N; ++i) {
            scanf("%d", &L);

            int swap = 0, train[MAX] = { 0 };
            for (int j = 0; j < L; ++j) {
                scanf("%d", &train[j]);
            }

            // Use the bubble sort to sort the train and increase the number of swap when swaping
            for (int j = 0; j < L; ++j) {
                for (int k = L - 1; k > 0; --k) {
                    // Swapping
                    if (train[k] < train[k - 1]) {
                        train[k] ^= train[k - 1] ^= train[k] ^= train[k - 1];
                        ++swap;
                    }
                }
            }

            // Print the result
            printf("Optimal train swapping takes %d swaps.\n", swap);
        }
    }

    return 0;
}