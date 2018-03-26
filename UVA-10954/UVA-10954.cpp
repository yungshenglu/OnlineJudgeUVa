#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;

int main(void) {
    int N, x;

    while (scanf("%d", &N) != EOF && N) {
        // Use priority queue with greater function to get the smallest element at top of queue
        priority_queue< int, vector< int >, greater< int > > pqueue;
        for (int i = 0; i < N; ++i) {
            scanf("%d", &x);
            pqueue.push(x);
        }

        int cost = 0;
        while (pqueue.size() != 1) {
            // Add top two elements
            x = pqueue.top();
            pqueue.pop();
            x += pqueue.top();
            pqueue.pop();

            // Add into the cost and push back into queue
            cost += x;
            pqueue.push(x);
        }

        // Print the result
        printf("%d\n", cost);
    }

    return 0;
}