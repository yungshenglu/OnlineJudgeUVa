#include <cstdio>
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(void) {
    int N, command, x;

    while (scanf("%d", &N) != EOF) {
        stack< int > sta;
        queue< int > que;
        priority_queue< int > pque;

        bool isStack = 1, isQueue = 1, isPriorityQueue = 1;
        while (N--) {
            scanf("%d %d", &command, &x);
            if (command == 1) {
                // Throw element into bag
                sta.push(x);
                que.push(x);
                pque.push(x);
            } 
            else {
                // Determine whether it is stack structure
                if (sta.empty() || sta.top() != x)
                    isStack = 0;
                else
                    sta.pop();

                // Determine whether it is queue structure
                if (que.empty() || que.front() != x)
                    isQueue = 0;
                else
                    que.pop();
                
                // Determine whether it is priority queue structure
                if (pque.empty() || pque.top() != x)
                    isPriorityQueue = 0;
                else
                    pque.pop();
            }
        }

        // Determine the final structure and print the result
        if (isStack + isQueue + isPriorityQueue > 1)
            printf("not sure\n");
        else if (isStack)
            printf("stack\n");
        else if (isQueue)
            printf("queue\n");
        else if (isPriorityQueue)
            printf("priority queue\n");
        else
            printf("impossible\n");
    }

    return 0;
}