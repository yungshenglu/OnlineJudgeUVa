#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
    long long int N;

    while (scanf("%lld", &N) != EOF) {
        // Get the last index of the specified line
        long long int index = 0;
        for (long long int i = 1; i <= N; i += 2)
            index += i;
        
        long long int sum = 0;
        for (long long int i = index; i > (index - 3); --i)
            sum += ((i - 1) * 2 + 1);
        
        // Print the result
        printf("%ld\n", sum);
    }

    return 0;
}