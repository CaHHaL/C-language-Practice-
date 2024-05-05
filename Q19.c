// Create a union named Worker with two members: name (an array of 20 characters) and wage (an integer). Write a program to read the name,  wages, and number of days worked by a worker and calculate the total payment.
// Input format :
// The first line consists of a string, representing the name of the worker.
// The second line consists of an integer, representing the wages of the worker.
// The third line consists of an integer, representing the days worked by the worker.
// Output format :
// The output displays an integer, which is the payment for the worker.

// Refer to the sample output for the formatting specifications.
// Code constraints :
// Length of the name ≤ 20
// 1 ≤ wages ≤ 1000
// 1 ≤ days ≤ 15
// Sample test cases :
// Input 1 :
// Ram
// 500
// 6
// Output 1 :
// 3000

#include <stdio.h>
#include <string.h>

union Worker
{
    char name[20];
    struct
    {
        int wages;
        int days;
    } info;
};

int main()
{
    union Worker worker;

    fgets(worker.name, sizeof(worker.name), stdin);
    worker.name[strcspn(worker.name, "\n")] = '\0';

    scanf("%d", &worker.info.wages);

    scanf("%d", &worker.info.days);

    int payment = worker.info.wages * worker.info.days;
    printf("%d\n", payment);

    return 0;
}
