/* Compile error */

#include <stdio.h>

#define MAX 10005

int main(void) {
    int arr[MAX], top = 0, tmp;
    int i, j;
    
    while (scanf("%d", &arr[top++]) != EOF) {
        // Insertion sort
        for (i = 0; i < top; ++i) {
            if (arr[top - 1] > arr[i]) {
                tmp = arr[top - 1];
                for (j = top - 1; j > i; --j)
                    arr[j] = arr[j - 1];
                arr[i] = tmp;
            }
        }

        // Result
        if (top % 2)
            printf("%d\n", arr[top / 2]);
        else
            printf("%d\n", (arr[top / 2] + arr[top / 2] - 1) / 2);
    }

    return 0;
}