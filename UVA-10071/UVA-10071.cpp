#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
    int v, t;

    while (scanf("%d %d", &v, &t) != EOF) {
        // Calculate the displacement be in twice of that time and print it
        printf("%d\n", 2 * v * t);
    }

    return 0;
}
