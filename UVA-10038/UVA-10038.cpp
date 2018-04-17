#include <cstdio>
#include <cmath>
#include <iostream>

#define MAX 3005

using namespace std;

int main(void) {
    int N, arr[MAX];

    while (scanf("%d", &N) != EOF) {
        int jolly[MAX] = { 0 };
        bool isJolly = true;

        // Read the sequency of integer
        scanf("%d", &arr[0]);
        for (int i = 1; i < N; ++i) {
            scanf("%d", &arr[i]);

            // Calculate the difference between successive elements
            int diff = abs(arr[i] - arr[i - 1]);
            if (diff <= 3000)
                ++jolly[diff];
        }

        // Check if the sequence of integer is jolly
        for (int i = 1; i < N; ++i) {
            if (jolly[i] == 0) {
                isJolly = false;
                break;
            }
        }

        // Print the result
        if (isJolly)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }

    return 0;
}