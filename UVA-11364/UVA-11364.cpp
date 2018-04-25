#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
    int T, N;

    while (scanf("%d", &T) != EOF) {

        // Compare the current store's position with max and min positon
        for (int t = 0; t < T; ++t) {
            int minPosition = 100, maxPosition = -1, position;
            
            scanf("%d", &N);
            for (int i = 0; i < N; ++i) {
                scanf("%d", &position);

                // Update the current max position
                if (position > maxPosition)
                    maxPosition = position;
                
                // Update the current min position
                if (position < minPosition)
                    minPosition = position;
            }

             // Print the result
            printf("%d\n", (maxPosition - minPosition) * 2);
        }
    }

    return 0;
}