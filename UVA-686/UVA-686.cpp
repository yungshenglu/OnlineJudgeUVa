#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

/* Determine whether the number is prime */
bool isPrime(int n) {
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
    
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(void) {
    int n;

    while (scanf("%d", &n) != EOF && n != 0) {
        // Count all possible cases
        int count = 0;
        for (int i = 2; i <= n / 2; ++i) {
            if (isPrime(i) && isPrime(n - i))
                ++count;
        }

        // Print the result
        printf("%d\n", count);
    }

    return 0;    
}