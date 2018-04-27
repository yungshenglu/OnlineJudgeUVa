#include <cstdio>
#include <iostream>

using namespace std;

typedef struct point {
    double x;
    double y;
} Point;

int main(void) {
    Point parall[4];

    while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &parall[0].x, &parall[0].y, &parall[1].x, &parall[1].y, &parall[2].x, &parall[2].y, &parall[3].x, &parall[3].y) != EOF) {
        // If the first point and the third point are same
        if (parall[0].x == parall[2].x && parall[0].y == parall[2].y) {
            printf("%.3lf %.3lf\n", (parall[1].x + parall[3].x) - parall[0].x, (parall[1].y + parall[3].y) - parall[0].y);
        }
        // If the first point and the last point are same
        else if (parall[0].x == parall[3].x && parall[0].y == parall[3].y) {
            printf("%.3lf %.3lf\n", (parall[1].x + parall[2].x) - parall[0].x, (parall[1].y + parall[2].y) - parall[0].y);
        }
        // If the second point and the third point are same
        else if (parall[1].x == parall[2].x && parall[1].y == parall[2].y) {
            printf("%.3lf %.3lf\n", (parall[0].x + parall[3].x) - parall[1].x, (parall[0].y + parall[3].y) - parall[1].y);
        }
        // If the first point and the last point are same
        else {
            printf("%.3lf %.3lf\n", (parall[0].x + parall[2].x) - parall[1].x, (parall[0].y + parall[2].y) - parall[1].y);
        }
    }

    return 0;
}