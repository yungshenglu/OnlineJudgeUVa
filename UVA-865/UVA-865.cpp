/* This code is accepted only in C++11 5.3.0 */
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>

#define MAX 70

using namespace std;

int main(void) {
    int T;
    char plaintext[MAX], substitution[MAX], text[MAX];
    map< char, char > dictionary;

    while (scanf("%d", &T) != EOF) {
        // Pass the next-line character
        getchar();
        getchar();

        for (int t = 0; t < T; ++t) {
            dictionary.clear();
            gets(plaintext);
            gets(substitution);

            // Print the substitutiion text and plaintext 
            printf("%s\n%s\n", substitution, plaintext);

            // Build the dictionary to map the plaintext into sibstitution text
            for (int i = 0; i < strlen(plaintext) && i < strlen(substitution); ++i) {
                dictionary[plaintext[i]] = substitution[i];
            }

            // Read the text and translate into substitution text
            while (gets(text) && strlen(text) != 0) {
                for (int i = 0; i < strlen(text); ++i) {
                    putchar(dictionary[text[i]] == 0 ? text[i] : dictionary[text[i]]);
                }
                printf("\n");
            }

            // Print a next-line character if it is last case
            if (t < T - 1)
                printf("\n");
        }
    }

    return 0;
}