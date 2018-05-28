#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

string dayOfWeek[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
int dayOfMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int mapWeek[12] = { 10, 21, 14, 4, 9, 6, 11, 8, 5, 10, 7, 12 };

int main(void) {
    int T, M, D;

    while (scanf("%d", &T) != EOF) {
        for (int t = 0; t < T; ++t) {
            scanf("%d %d", &M, &D);

            // Calculate the gap from the known day and print the result
            int gap = abs(D - mapWeek[M - 1]);
            if (D < mapWeek[M - 1]) {
                if (gap % 7 == 0)
                    cout << dayOfWeek[0] << endl;
                else
                    cout << dayOfWeek[7 - (gap % 7)] << endl;
            }
            else
                cout << dayOfWeek[gap % 7] << endl;
        }
    }

    return 0;
}