// Write a program in C to sort elements of an array in ascending order.
// Test Data :
// Input the size of array : 5
// Input 5 elements in the array :
// input1 : 2
// input2 : 7
// input3 : 4
// input4 : 5
// input5 : 9
// Expected Output :
// Elements of array in sorted ascending order:
// 2 4 5 7 9
#include <stdio.h>
void bubbleSort(int array[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int size, i;
    printf("Input the size of array: ");
    scanf("%d", &size);

    int array[size];
    printf("Input %d elements in the array:\n", size);
    for (i = 0; i < size; i++)
    {
        printf("input%d : ", i + 1);
        scanf("%d", &array[i]);
    }
    bubbleSort(array, size);
    printf("Elements of array in sorted ascending order:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
