#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

typedef struct pallet {
    int w;
    int h;
} Pallet;

// Let the smaller one of width or height be first
void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

bool compare(Pallet &a, Pallet &b) {
    if (a.w == b.w)
        return a.h < b.h;
    return a.w < b.w;
}

int main(void) {
    Pallet box[6];

    while (scanf("%d %d", &box[0].w, &box[0].h) != EOF) {
        // Let the smaller one of width or height be first
        if (box[0].w > box[0].h)
            swap(&box[0].w, &box[0].h);
        
        // Get the legacy width and height
        for (int i = 1; i < 6; ++i) {
            scanf("%d %d", &box[i].w, &box[i].h);
            if (box[i].w > box[i].h)
                swap(&box[i].w, &box[i].h);
        }

        // Sort all pallets in increasing order
        sort(box, box + 6, compare);

        // Determine whether the box is possible or not
        bool possible = true;
        for (int i = 0; i < 6; i += 2) {
            if (box[i].w != box[i + 1].w || box[i].h != box[i + 1].h) {
                possible = false;
                break;
            }
        }
        if (possible) {
            if (box[0].w != box[2].w || box[0].h != box[4].w || box[2].h != box[4].h)
                possible = false;
        }

        // Print the result
        puts(possible ? "POSSIBLE" : "IMPOSSIBLE");
    }

    return 0;
}