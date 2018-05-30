#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 10005

using namespace std;

typedef struct list {
    int num;
    int mod;
    int evenOdd;
} List;

/* Compare function for sorting */
bool compare(List a, List b) {
    if (a.mod == b.mod) {
        if (a.evenOdd == 0 && b.evenOdd == 0)
            return a.num < b.num;
        else if (a.evenOdd == 1 && b.evenOdd == 1)
            return a.num > b.num;
        else if (a.evenOdd == 1 && b.evenOdd == 0)
            return true;
        else if (a.evenOdd == 0 && b.evenOdd == 1)
            return false;
    }

    return a.mod < b.mod;
}

int main(void) {
    int N, M;

    while (scanf("%d %d", &N, &M) != EOF) {
        vector<List> arr;
        
        // End of input
        printf("%d %d\n", N, M);
        if (N == 0 && M == 0)
            break;
        
        List tmp;
        for (int n = 0; n < N; ++n) {
            scanf("%d", &tmp.num);
            tmp.mod = tmp.num % M;
            tmp.evenOdd = abs(tmp.num % 2);
            arr.push_back(tmp);
        }

        // Sorting
        sort(arr.begin(), arr.end(), compare);

        // Print the result
        for (int i = 0; i < N; ++i)
            printf("%d\n", arr[i].num);
    }

    return 0;
}