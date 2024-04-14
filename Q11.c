
#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

int main() {
    int arr[] = {0, 3, 6, 9, 12, 14, 18, 20, 22, 25, 27};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4; // Number of positions to rotate

    printf("The given array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("From %dth position the values of the array are: ", k);
    for (int i = k; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Before %dth position the values of the array are: ", k);
    for (int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rotateArray(arr, n, k);

    printf("After rotating from %dth position the array is:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

