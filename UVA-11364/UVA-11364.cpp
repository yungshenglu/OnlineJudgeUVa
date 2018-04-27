#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
    int T, N, position;
    vector< int > shop;

    while (scanf("%d", &T) != EOF) {

        // Compare the current store's position with max and min positon
        for (int t = 0; t < T; ++t) {
            shop.clear();

            scanf("%d", &N);
            for (int i = 0; i < N; ++i) {
                scanf("%d", &position);
                shop.push_back(position);
            }

            // Sort the position of shop
            sort(shop.begin(), shop.end());

            // Print the result
            printf("%d\n", (shop[N - 1] - shop[0]) * 2);
        }
    }

    return 0;
}