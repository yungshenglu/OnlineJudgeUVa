#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <map>

#define MAX 105

using namespace std;

int main(void) {
    int L, N;
    char word1[MAX], word2[MAX];

    while (scanf("%d %d", &L, &N) != EOF) {
        // Create a map to store the mapping plural form of each word
        map< string, string > plural;
        for (int i = 0; i < L; ++i) {
            scanf("%s %s", word1, word2);
            plural[word1] = word2;
        }

        for (int i = 0; i < N; ++i) {
            scanf("%s", word1);

            // Match the plural form of current word
            if (plural.find(word1) != plural.end()) {
                printf("%s\n", plural[word1].c_str());
                continue;
            }

            int length = strlen(word1);
            
            // If the word ends in a consonant followed by "y", replace "y" with "ies"
            if (word1[length - 1] == 'y' && word1[length - 2] != 'a' && word1[length - 2] != 'e' && word1[length - 2] != 'i' && word1[length - 2] != 'o' && word1[length - 2] != 'u') {
                word1[length - 1] = 'i';
                word1[length] = 'e';
                word1[length + 1] = 's';
                word1[length + 2] = '\0';
            }
            // If the word ends in "o", "s" or "x", append "es" to the word.
            else if (word1[length - 1] == 'o' || word1[length - 1] == 's' || word1[length - 1] == 'x') {
                word1[length] = 'e';
                word1[length + 1] = 's';
                word1[length + 2] = '\0';
            }
            // If the word ends in "ch" or "sh", append "es" to the word.
            else if (length > 1 && ((word1[length - 2] == 'c' && word1[length - 1] == 'h') || (word1[length - 2] == 's' && word1[length - 1] == 'h'))) {
                word1[length] = 'e';
                word1[length + 1] = 's';
                word1[length + 2] = '\0';
            }
            // Else append "s" to the word
            else {
                word1[length] = 's';
                word1[length + 1] = '\0';
            }

            // Print the result
            printf("%s\n", word1);
        }
    }

    return 0;
}