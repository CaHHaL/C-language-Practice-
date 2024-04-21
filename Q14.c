#include <stdio.h>
void R(int arr[], int size) {
    int x = 0;
    int y = size - 1;
    while (x < y) {
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
        x++;
        y--;
    }
}
int main() {
    int A[5] = {87, 98, 56, 78, 45};
    R(A, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}