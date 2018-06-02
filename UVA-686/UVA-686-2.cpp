#include <cstdio>
#include <cmath>
#include <iostream>

#define MAX 33000

using namespace std;

int main(void) {
    int n, prime[MAX] = { 0 };

    // Build a table to store all prime numbers
    for (int i = 2; i <= MAX; ++i) {
		if (prime[i] == 0) {
			for (int j = i; i * j <= MAX; ++j) {
				prime[i * j] = 1;
			}
		}
	}

    while (scanf("%d", &n) != EOF && n != 0) {
        // Count all possible cases
        int count = 0;
        for (int i = 2; i <= n / 2; ++i) {
            if (!prime[i] && !prime[n - i])
                ++count;
        }

        // Print the result
        printf("%d\n", count);
    }

    return 0;    
}