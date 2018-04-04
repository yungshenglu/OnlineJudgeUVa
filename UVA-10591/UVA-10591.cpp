#include <cstdio>
#include <iostream>
#include <set>

using namespace std;

int squareSum(int n) {
    int sum = 0;

    while (n > 0) {
        sum += ((n % 10) * (n % 10));
        n /= 10;
    }

    return sum;
}

int main(void) {
    int T, N;

    while (scanf("%d", &T) != EOF) {
        for (int i = 1; i <= T; ++i) {
            scanf("%d", &N);

            // Create a set to store the current number for checking in the futrue
            set< int > checkedNum;
            checkedNum.insert(N);

            bool isHappy = true;
            int number = N;
            while (number != 1) {
                // Calculate the sum of each digit's squared
                number = squareSum(number);

                // Check whether the number is exist in the set before
                if (checkedNum.find(number) != checkedNum.end()) {
                    isHappy = false;
                    break;
                }

                // Store the current number into the set
                checkedNum.insert(number);
            }

            // Print the result
            if( isHappy ){
                printf("Case #%d: %d is a Happy number.\n", i, N);
            }
            else {
                printf("Case #%d: %d is an Unhappy number.\n", i, N);
            }
        }
    }

    return 0;
}