#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>

#define MAX 450

using namespace std;

/* Define a strcut to store the each ship's connection */
typedef struct ROUTE {
    vector< string > leg;
} Route;

int BFS(string src, string dst, map< string, int > ship, Route route[]) {
    int require[MAX] = { 0 };
    queue< string > que;
    que.push(src);

    // Use BFS to find out the legs between src and dst ship
    while (!que.empty()) {
        string curr = que.front();
        que.pop();

        for (int i = 0; i < route[ship[curr]].leg.size(); ++i) {
            string next = route[ship[curr]].leg[i];

            // Determine the leg only used once
            if (require[ship[next]] == 0) {
                require[ship[next]] = require[ship[curr]] + 1;

                // Bound
                if (next == dst)
                    return require[ship[next]];

                que.push(next);
            }
        }
    }

    return 0;
}

int main(void) {
    int T, M, N, P;

    scanf("%d", &T);
    for (int t = 0; t < T; ++t) {
        scanf("%d %d %d", &M, &N, &P);

        // Build a map to store each ship with a index number
        map< string, int > ship;
        string str1, str2;
        for (int m = 0; m < M; ++m) {
            cin >> str1;
            ship[str1] = m;
        }

        // Build a routing table for all ships
        Route route[MAX];
        for (int n = 0; n < N; ++n) {
            cin >> str1 >> str2;
            route[ship[str1]].leg.push_back(str2);
            route[ship[str2]].leg.push_back(str1);
        }

        if (t == 0)
            printf("SHIPPING ROUTES OUTPUT\n\n");
        printf("DATA SET  %d\n\n", t + 1);

        int size, legs;
        for (int p = 0; p < P; ++p) {
            cin >> size >> str1 >> str2;
            legs = BFS(str1, str2, ship, route);
            if (!legs)
                printf("NO SHIPMENT POSSIBLE\n");
            else
                printf("$%d\n", size * legs * 100);
        }
        printf("\n");
    }
    printf("END OF OUTPUT\n");


    return 0;
}