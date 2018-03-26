/* This code is accepted only in C++11 5.3.0 */
#include <cstdio>
#include <iostream>
#include <string>
#include <map>

#define MAX 200

using namespace std;

int main(void) {
    // Define a string-string map to store each word
    map< string, string > dictionary;

    char line[MAX];
    while (gets(line)) {
        // Determine if the input is end
        if (line[0] == '\0')
            break;
        
        char a[MAX / 2], b[MAX / 2];
        sscanf(line, "%s %s", a, b);
        dictionary[b] = a;
    }

    while (gets(line)) {
        // Determine if the input is end
        if (line[0] == '\0')
            break;
        
        // Search the dictionary and print the result
        if (dictionary[line] == "\0")
            printf("eh\n");
        else
            printf("%s\n", dictionary[line].c_str());
    }

    return 0;
}