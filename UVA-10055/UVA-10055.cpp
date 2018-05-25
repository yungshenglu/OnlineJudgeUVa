#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    long long int num1, num2;

    while (scanf("%ld %ld", &num1, &num2) != EOF) {
        // Let number of Hashmat's army be first
        if (num1 > num2)    
            swap(num1, num2);

        // Print the result
        printf("%ld\n", num2 - num1);
    }

    return 0;
}