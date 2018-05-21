#include <cstdio>
#include <iostream>

#define MAX 10

using namespace std;

bool isOrdered(int *arr) {
    // Consider the case when equal
    int s = 0;
    while (arr[s] == arr[s + 1])
        s = s + 1;

    if (arr[s] < arr[s + 1]) {
        // The array is in increasing order
        for (int i = s + 1; i < MAX - 1; ++i) {
            if (arr[i] > arr[i + 1])
                return false;
        }
    }
    else {
        // The array is in decreasing order
        for (int i = s + 1; i < MAX - 1; ++i) {
            if (arr[i] < arr[i + 1])
                return false;
        }
    }

    return true;
}

int main(void) {
    int N, beard[MAX];

    while (scanf("%d", &N) != EOF) {
        for (int n = 0; n < N; ++n) {
            for (int i = 0; i < MAX; ++i)
                scanf("%d", &beard[i]);

            if (n == 0)
                printf("Lumberjacks:\n");

            if (isOrdered(beard))
                printf("Ordered\n");
            else
                printf("Unordered\n");
        }
    }

    return 0;
}