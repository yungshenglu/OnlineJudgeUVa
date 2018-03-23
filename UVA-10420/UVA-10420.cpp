#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

#define MAX 2005

using namespace std;

int main(void) {
    int N;
    string country[MAX];

    while (scanf("%d", &N) != EOF) {
        string name;
        for (int i = 0; i < N; ++i) {
            cin >> country[i];
            // Do not need to consider the name
            getline(cin, name);
        }

        // Sort the country list in alphabetical order
        sort(country, country + N);

        // Count number of country and print the result
        for (int i = 0; i < N; ++i) {
            printf("%s ", country[i].c_str());

            int j, count = 0;
            for (j = i; j < N; ++j) {
                if (country[i] != country[j])
                    break;
                ++count;
            }

            printf("%d\n", count);
            i = j - 1;
        }
    }
    
    return 0;
}