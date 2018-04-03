#include <cstdio>
#include <iostream>

using namespace std;

long long int MLCM(long long int n) {
    long long int result = 0, count;
    long long int l = 1, r;

    while (l <= n) {
        // Count each factor
        count = n / l;

        // Get the right bound value with same counts
        r = n / count;

        // Sum the current counts from left to right value
        result += count * ((l + r) * (r - l + 1) / 2);

        // Shift to the right bound
        l = r + 1;
    }

    // Remove 1 from the summation
    return result -= 1;
}

int main(void) {
    long long int N;

    while (scanf("%lld", &N) != EOF && N) {
        // Call MLCM and print the result
        printf("%lld\n", MLCM(N));
    } 

    return 0;
}