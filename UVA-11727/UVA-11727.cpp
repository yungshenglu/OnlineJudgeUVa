#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
    int T, salery[3], result;
    
    scanf("%d", &T);
    for (int t = 0; t < T; ++t) {
        for (int i = 0; i < 3; ++i)
            scanf("%d", &salery[i]);
        
        // Find the middle one in three saleries
        result = max(min(salery[0], salery[1]), min(max(salery[0], salery[1]), salery[2]));

        // Print the result
        printf("Case %d: %d\n", (t + 1), result);
    }

    return 0;
}