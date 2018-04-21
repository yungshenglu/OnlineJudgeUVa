#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

string product(int N) {
    string result;
    int factor;

    while (N != 1) {
        for (factor = 9; factor > 1; --factor) {
            if (N % factor == 0) {
                N /= factor;
                result = (char)(factor + '0') + result;
                break;
            }
        }

        if (factor == 1)
            return "-1";
    }

    return result;
}

int main(void) {
    int T, N;

    while (scanf("%d", &T) != EOF) {
        for (int t = 0; t < T; ++t) {
            scanf("%d", &N);

            // The number less than 10 cannot be decomposed
            if (N < 10) {
                printf("%d\n", N);
                continue;
            }

            // Find the product of N and print the result
            cout << product(N) << endl;
        }
    }

    return 0;
}