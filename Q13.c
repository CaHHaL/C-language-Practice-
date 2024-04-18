// Find the maximum of the array in the inputed array

#include <stdio.h>
int findMaximum(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            return arr[mid];
        }
        else if (arr[mid] >= arr[left])
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    return arr[left];
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", findMaximum(arr, n));
}