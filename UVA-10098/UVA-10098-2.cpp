#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
    int N;
    string str;

    // Set the standard C++ stream to asynchronized after input/output
    ios::sync_with_stdio(false);

    while (cin >> N) {
        for (int i = 0; i < N; ++i) {
            cin >> str;

            // Sort the input string by the first character
            sort(str.begin(), str.end());

            do {
                // For C++ 11 standard to print the possible permuatation iteratively
                for (char &ch : str)
                    cout << ch;
                cout << endl;
            } while (next_permutation(str.begin(), str.end()));

            cout << endl;
        }
    }

    return 0;
}