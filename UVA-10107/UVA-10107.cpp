#include <cstdio>

#define MAX 10005

using namespace std;

int main(void) {
    int arr[MAX], top = 0, tmp;
    while (scanf("%d", &arr[top++]) != EOF) {
        // Insertion sort
        for (int i = 0; i < top; ++i) {
            if (arr[top - 1] > arr[i]) {
                tmp = arr[top - 1];
                for (int j = top - 1; j > i; --j)
                    arr[j] = arr[j - 1];
                arr[i] = tmp;
                break;
            }
        }
        
        // Result
        if (top % 2)
            printf("%d\n", arr[top / 2]);
        else
            printf("%d\n", (arr[top / 2] + arr[top / 2 - 1]) / 2);
    }

    return 0;
}