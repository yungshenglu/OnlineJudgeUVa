#include <cstdio>
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

// Compare function for sorting two events
bool compare(pair< int, int > A, pair< int, int > B) {
    if (A.second == B.second)
        return A.first < B.first;
    return A.second < B.second;
}

int main(void) {
    int N, S, F;
    vector< pair< int, int > > meeting;

    while (scanf("%d", &N) != EOF) {
        for (int n = 0; n < N; ++n) {
            meeting.clear();
            while (scanf("%d %d", &S, &F) != EOF && S + F > 0)
                meeting.push_back(make_pair(S, F));

            // Sort all events
            sort(meeting.begin(), meeting.end(), compare);

            // Use greedy method to get the maximum events
            int count = 0, start = 0;
            for (int i = 0; i < meeting.size(); ++i) {
                if (start <= meeting[i].first) {
                    ++count;
                    start = meeting[i].second;
                }
            }

            // Print the result
            printf("%d\n", count);
        }
    }

    return 0;
}