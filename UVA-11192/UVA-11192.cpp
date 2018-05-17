#include <cstdio>
#include <iostream>
#include <string>

#define GROUP 15

using namespace std;

int main(void) {
    int G;
    string str;

    while (cin >> G >> str && G > 0) {
        // Calculate the substring size for each group
        int length = str.size() / G;

        for (int i = 0; i < str.size(); i += length) {
            // Get the substring in group size
            string group = str.substr(i, length);
            // Print the reverse group string
            cout << string(group.rbegin(), group.rend());
        } 
        cout << endl;
    }

    return 0;
}