#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 15

using namespace std;

bool compare(char a, char b) {
    return a < b;
}

void permutation(int total, int left, char str[], bool isSelect[], vector< char > &tmp) {
    if (left == 0) {
        // Print the possible permutation when the left is 0
        for (int i = 0; i < total; ++i)
            printf("%c", tmp[i]);
        printf("\n");
    }
    else {
        for (int i = 0; i < total; ++i) {
            // To avoid when there are two or more same character in the input, i.e., aab
            if (isSelect[i] == 0 && isSelect[i + 1] == 1 && str[i] == str[i + 1])
                continue;
            
            // When the character has not been selected
            if (isSelect[i] == 0) {
                isSelect[i] = 1;
                tmp.push_back(str[i]);

                // Permuate the left characters
                permutation(total, left - 1, str, isSelect, tmp);

                // Backtrack to the last case
                tmp.pop_back();
                isSelect[i] = 0;
            }
        }
    }
}

int main(void) {
    int N;
    char str[MAX];

    while (scanf("%d", &N) != EOF) {
        for (int i = 0; i < N; ++i) {
            scanf("%s", str);

            // Sort the input by first character
            sort(str, str + strlen(str), compare);

            bool isSelect[MAX] = { 0 };
            vector< char > tmp;

            // Start permutation
            permutation(strlen(str), strlen(str), str, isSelect, tmp);

            printf("\n");
        }
    }

    return 0;
}