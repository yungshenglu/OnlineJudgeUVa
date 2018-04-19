#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <iterator>

using namespace std;

int main(void) {
    set<int> set1, set2, intersect;
    set<int>::iterator it;
    int num;
    char ch;

    while (scanf("%d%c", &num, &ch) == 2) {
        // Initialize two sets
        set1.clear();
        set2.clear();
        intersect.clear();

        set1.insert(num);
        while (ch != '\n') {
            scanf("%d%c", &num, &ch);
            set1.insert(num);
        }

        ch = ' ';
        while (ch != '\n') {
            scanf("%d%c", &num, &ch);
            set2.insert(num);
        }

        // Compare two sets if match
        set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(intersect, intersect.begin()));
        int match = intersect.size();

        // Print the result
        if (match == 0)
            printf("A and B are disjoint\n");
        else if (match == set1.size() && match == set2.size())
            printf("A equals B\n");
        else if (match == set1.size())
            printf("A is a proper subset of B\n");
        else if (match == set2.size())
            printf("B is a proper subset of A\n");
        else
            printf("I'm confused!\n");
    }

    return 0;
}