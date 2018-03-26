#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int n, m, num;

// Move the last one of disk from a to c1
void move(vector< int > &a, vector< int > &c, vector< int > *hanoi[]) {
    // Move the top of c to a
    c.push_back(a.back());
    a.pop_back();

    // Print the current hanoi in a, b and c
    printf("\n");
    printf("A=>");
    if (hanoi[0]->size())
        printf("  ");
    for (int i = 0; i < hanoi[0]->size(); ++i)
        printf(" %d", (*hanoi[0])[i]);
    printf("\n");

    printf("B=>");
    if (hanoi[1]->size())
        printf("  ");
    for (int i = 0; i < hanoi[1]->size(); ++i)
        printf(" %d", (*hanoi[1])[i]);
    printf("\n");

    printf("C=>");
    if (hanoi[2]->size())
        printf("  ");
    for (int i = 0; i < hanoi[2]->size(); ++i)
        printf(" %d", (*hanoi[2])[i]);
    printf("\n");

    ++num;
}

// Move all the disk from a (2nd param) to c (4th param)
void Hanoi(int n, vector< int > &a, vector< int > &b, vector< int > &c, vector< int > *hanoi[]) {
    if (n == 1 && num < m)
        move(a, c, hanoi);
    else if (num < m) {
        Hanoi(n - 1, a, c, b, hanoi);
        if (num >= m)
            return;
        move(a, c, hanoi);
        if (num >= m)
            return;
        Hanoi(n - 1, b, a, c, hanoi);
    }
}

int main(void) {
    for (int i = 0; ; ++i) {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0)
            break;
        
        num = 0;
        printf("Problem #%d\n\n", (i + 1));

        vector< int > a, b, c;

        // Define for manage the order of the a, b and c
        vector< int > *hanoi[3] = {&a, &b, &c};

        printf("A=>  ");
        for (int j = n; j > 0; --j) {
            a.push_back(j);
            printf(" %d", j);
        }
        printf("\nB=>\nC=>\n");

        Hanoi(n, a, b, c, hanoi);
        printf("\n");
    }

    return 0;
}