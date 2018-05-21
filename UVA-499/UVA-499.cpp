#include <cstdio>
#include <cstring>
#include <iostream>

#define MAX 128

using namespace std;

int main(void) {
    int count[MAX] = { 0 };
    char text;

    while (scanf("%c", &text) != EOF) {
        if (text != '\n') {
            // Count into each character
            ++count[text];
        }
        else {
            int result = 0;
            // Get the maximum count in upper case
            for (char ch = 'A'; ch <= 'Z'; ++ch) {
                if (count[ch] > result)
                    result = count[ch];
            }

            // Get the maximum count in lower case
            for (char ch = 'a'; ch <= 'z'; ++ch) {
                if (count[ch] > result)
                    result = count[ch];
            }

            // Print the maximum count of upper case
            for (char ch = 'A'; ch <= 'Z'; ++ch) {
                if (result == count[ch])
                    printf("%c", ch);
            }

            // Print the maximum count of lower case
            for (char ch = 'a'; ch <= 'z'; ++ch) {
                if (result == count[ch])
                    printf("%c", ch);
            }

            // Print the result
            printf(" %d\n", result);

            // Initialize the count
            memset(count, 0, sizeof(count));
        }
    }

    return 0;
}