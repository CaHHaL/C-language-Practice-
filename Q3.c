// Write a program to print the fibonaci series starting from 0 and till the entered term
#include <stdio.h>
int main()
{
    int num, t1 = 0, t2 = 1, sum = 0, product = 1;
    printf("Enter the number of terms:");
    scanf("%d", &num);
    printf("The series :");
    for (int i = 1; i <= num; i++)
    {

        printf("%d\t", sum);
        t1 = t2;
        t2 = sum;
        sum = t1 + t2;
    }

    return 0;
}