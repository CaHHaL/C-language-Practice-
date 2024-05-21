#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculate_area(int a, int b, int c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

typedef struct {
    int a;
    int b;
    int c;
    double area;
} Triangle;

int compare(const void *a, const void *b) {
    Triangle *t1 = (Triangle *)a;
    Triangle *t2 = (Triangle *)b;
    if (t1->area < t2->area) return -1;
    if (t1->area > t2->area) return 1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    
    Triangle triangles[n];

    for (int i = 0; i < n; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        triangles[i].a = a;
        triangles[i].b = b;
        triangles[i].c = c;
        triangles[i].area = calculate_area(a, b, c);
    }
    qsort(triangles, n, sizeof(Triangle), compare);
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", triangles[i].a, triangles[i].b, triangles[i].c);
    }

    return 0;
}
