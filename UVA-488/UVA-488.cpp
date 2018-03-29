#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
    int T, amplitude, frequency;

    while (scanf("%d", &T) != EOF) {
        // Pass the next line character
        //getchar();

        for (int t = 0; t < T; ++t) {
            scanf("%d", &amplitude);
            scanf("%d", &frequency);

            for (int f = 0; f < frequency; ++f) {
                // For the upper part of wave
                for (int a = 1; a <= amplitude; ++a) {
                    for (int i = 0; i < a; ++i)
                        printf("%d", a);
                    printf("\n");
                }

                // For the lower part of wave
                for (int a = amplitude - 1; a > 0; --a) {
                    for (int i = 0; i < a; ++i)
                        printf("%d", a);
                    printf("\n");
                }

                // Print the next line charater when it is last wave
                if (f < frequency - 1)
                    printf("\n");
            }

            // Print the next line charater when it is last wave in this case
            if (t < T - 1)
                printf("\n");
        }
    }

    return 0;
}