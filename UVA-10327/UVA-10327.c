#include <stdio.h>

#define MAX 1005

int main(void) {
    int N, list[MAX];

    while (scanf("%d", &N) != EOF) {
        for (int i = 0; i < N; ++i) {
            scanf("%d", &list[i]);
        }

        int flip = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = N - 1; j > i; --j) {
                if (list[j - 1] > list[j]) {
                    // Swap
                    swap(list[j - 1], list[j]);
                    ++flip;
                }
            }
        }

        // Print the result
        printf("Minimum exchange operations : %d\n", flip);
    }

    return 0;
}