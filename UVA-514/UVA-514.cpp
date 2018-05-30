#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

/* Determine whether the train can be restructed */
bool isRestruct(vector<int> order, queue<int> train) {
    stack<int> sta;
    for (int i = 0; i < order.size(); ++i) {
        sta.push(order[i]);
        // Datermine whether the order is same
        while (!sta.empty() && train.front() == sta.top()) {
            train.pop();
            sta.pop();
        }
    }

    // Bound
    if (train.empty())
        return true;
    return false;
}

int main(void) {
    int N;
    while (scanf("%d", &N) != EOF && N != 0) {
        while (1) {
            // Build the order of the train
            vector<int> order(N);
            for (int i = 0; i < N; ++i)
                order[i] = i + 1;

            // End of input
            int num;
            if (scanf("%d", &num) != EOF && num == 0)
                break;
            
            // Push the curren order of train into queue
            queue<int> train;
            train.push(num);
            for (int i = 1; i < N; ++i) {
                scanf("%d", &num);
                train.push(num);
            }

            // Print the result
            if (isRestruct(order, train))
                printf("Yes\n");
            else
                printf("No\n");
        }
        printf("\n");
    }

    return 0;
}