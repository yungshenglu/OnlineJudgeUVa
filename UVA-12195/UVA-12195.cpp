#include <cstdio>
#include <iostream>

#define MAX 205

using namespace std;

int main(void) {
    char measure[MAX];
    int duration[100];

    // Define each measure's duration with multiply by 64
    duration['W'] = 64;
    duration['H'] = 32;
    duration['Q'] = 16;
    duration['E'] = 8;
    duration['S'] = 4;
    duration['T'] = 2;
    duration['X'] = 1;

    while (scanf("%s", measure) != EOF && measure[0] != '*') {
        int sum = 0, result = 0;

        // Count sum of duration in each slash
        for (int i = 0; measure[i]; ++i) {
            if (measure[i] == '/') {
                // If current sum of duration is 64 then count it in
                if (sum == 64)
                    ++result;
                sum = 0;
            }
            else {
                // Add each measure's duration
                sum += duration[measure[i]];
            }
        }

        // Print the result
        printf("%d\n", result);
    }

    return 0;
}