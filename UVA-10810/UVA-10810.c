/* Compile error */

#include <stdio.h>

#define MAX 500005

long long int result = 0;

void merge(int list[], int low, int mid, int high) {
    int buff[MAX], i = low, j = mid + 1, k = -1;
    
    while (i <= mid || j <= high) {
        if (i > mid)
            buff[++k] = list[j++];
        else if (j > high)
            buff[++k] = list[i++]; 
        else if (list[i] >= list[j]) {
            buff[++k] = list[j++];
            result += (mid - i + 1);
        }
        else
            buff[++k] = list[i++];
    }

    k = 0;
    for (i = low; i <= high; ++i)
        list[i] = buff[k++];
}

void mergeSort(int list[], int low, int high) {
    int mid = (low + high) / 2;

    if (low < high) {
        mergeSort(list, low, mid);
        mergeSort(list, mid + 1, high);
        merge(list, low, mid, high);
    }
}

int main(void) {
    int N, list[MAX];

    while (scanf("%d", &N) != EOF) {
        if (N == 0)
            return 0;
        
        result = 0;
        for (int i = 0; i < N; ++i) {
            scanf("%d", &list[i]);
        }

        // Merge sort
        mergeSort(list, 0, N - 1);
        
        // Print the result
        printf("%lld\n", result);
    }

    return 0;
}