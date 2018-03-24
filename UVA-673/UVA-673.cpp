/* This code is accepted only in C++11 5.3.0 */
#include <cstdio>
#include <cstring>
#include <iostream>
#include <stack>

#define STR_MAX 140

using namespace std;

int main(void) {
    int N;

    scanf("%d", &N);
    getchar();
    
    for (int i = 0; i < N; ++i) {
        stack< char > parenthese;
        char str[STR_MAX];

        gets(str);

        // If the parentheses are matched, then pop up; otherwise, push into stack
        for (int j = 0; j < strlen(str); ++j) {
            if (str[j] == '(' || str[j] == '[')
                parenthese.push(str[j]);
            else if (str[j] == ')') {
                if (parenthese.empty() || parenthese.top() != '(') {
                    parenthese.push('0');
                    break;
                }
                parenthese.pop();
            }
            else if (str[j] == ']') {
                if (parenthese.empty() || parenthese.top() != '[') {
                    parenthese.push('0');
                    break;
                }
                parenthese.pop();
            } 
            else if (str[j] == '\0')
                break;
        }

        // If the stack is empty, then the string is correct
        if (parenthese.empty())
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}