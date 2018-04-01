#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

// Calculate the distance between two points.
int calculateDistance(int x, int y) {
    int d = 0;
    for (int i = 1; i <= (x + y); ++i) {
        d += i;
    }
    d += (x + 1);
    return d;
}

int main(void) {
    int N, x1, y1, x2, y2, d = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        d = abs(calculateDistance(x1, y1) - calculateDistance(x2, y2));

        // Result
        printf("Case %d: %d\n", (i + 1), d);
    }

    return 0;
}