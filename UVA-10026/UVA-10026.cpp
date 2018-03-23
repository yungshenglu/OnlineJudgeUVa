#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 1005

// Define each task with time and fine
typedef struct task {
    int index;
    int time;
    int fine;
    double cost;
} Task;

// Compare for sorting
bool compare(Task a, Task b) {
    return a.cost > b.cost;
}

int main(void) {
    int cases, N;
    Task list[MAX];

    scanf("%d", &cases);

    while (cases--) {
        scanf("%d", &N);
        for (int j = 0; j < N; ++j) {
            scanf("%d %d", &list[j].time, &list[j].fine);
            list[j].cost = list[j].fine * 1.0 / list[j].time;
            list[j].index = j + 1;
        }

        // Sort the task by cost
        sort(list, list + N, compare);

        // Print the result
        printf("%d", list[0].index);
        for (int i = 1; i < N; ++i)
            printf(" %d", list[i].index);
        printf("\n");
        
        // The last case should not get nextline.
        if (cases)
            printf("\n");
    }

    return 0;
}