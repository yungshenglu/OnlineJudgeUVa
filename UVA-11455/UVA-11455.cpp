#include <cstdio>
#include <iostream>
#include <algorithm>

#define MAX 4

using namespace std;

int main(void) {
    int T, side[MAX] = { 0 };

    while (scanf("%d", &T) != EOF) {
        for (int t = 0; t < T; ++t) {
            // Read the input length of each side
            for (int i = 0; i < MAX; ++i)   
                scanf("%d", &side[i]);
            
            // Sort all sides' length in increasing order
            sort(side, side + MAX);

            // Determine the which quadrangle it is
            if (side[0] == side[1] && side[2] == side[3]) {
                if (side[1] == side[2])
                    printf("square\n");
                else
                    printf("rectangle\n");
            }
            else if (side[0] + side[1] + side[2] < side[3])
                printf("banana\n");
            else 
                printf("quadrangle\n");
        }
    }

    return 0;
}