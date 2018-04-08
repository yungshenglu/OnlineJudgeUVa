#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int T;
    char credit[4];

    while (scanf("%d", &T) != EOF) {
        for (int t = 0; t < T; ++t) {      
            int odd = 0, even = 0;

            // For input each 4 digit number and add into odd and even digit checksum respectively
            for (int i = 0; i < 4; ++i) {
                scanf("%s", credit);
                odd += ((credit[1] - '0') + (credit[3] - '0'));
                even += (((credit[0] - '0') * 2) / 10 + ((credit[0] - '0') * 2) % 10 + ((credit[2] - '0') * 2) / 10 + ((credit[2] - '0') * 2) % 10);
            }

            // Print the result
            if ((odd + even) % 10)
                printf("Invalid\n");
            else
                printf("Valid\n");
        }
    }

    return 0;
}