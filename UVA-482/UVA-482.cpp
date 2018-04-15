#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    int T;
    vector<int> arr_index;

    while (scanf("%d", &T) != EOF) {
        for (int t = 0; t < T; ++t) {
            arr_index.clear();

            // Get the input of index and end with next line characters
            int index;
            char ch;
            while (scanf("%d%c", &index, &ch) == 2) {
                arr_index.push_back(index);
                if (ch == '\n') 
                    break;
            }

            // Use string vector to store data which contain type of integer and float
            vector<string> arr_data(arr_index.size() + 1);

            string str;
            for (int i = 0; i < arr_index.size(); ++i) {
                cin >> str;
                arr_data[arr_index[i]] = str;
            }

            // Print the result
            for (int i = 1; i < arr_data.size(); ++i)
                cout << arr_data[i] << endl;

            // Print a next line character if it is not the last case
            if (t != T - 1)
                cout << endl;
        }
    }

    return 0;
}