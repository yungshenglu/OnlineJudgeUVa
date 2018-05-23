#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    bool word = false;

    while (getline(cin, str)) {        
        int count = 0, flag = 0;

        // Decoding and print the result
        for (int i = 0; i < str.length(); ++i) {
            if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
                flag = 1;
            else {
                count += flag;
                flag = 0;
            }
        }
        count += flag;

        // Print the result
        printf("%d\n", count);
    }

    return 0;
}