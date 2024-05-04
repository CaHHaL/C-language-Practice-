// Enid, a mathematics enthusiast, has a challenge for you! She wants you to create a program that calculates and prints the square of numbers from 0 to N-1, where N is a user input value.
// Enid insists that you use a macro named SQUARE(x) to perform the square calculations and store the results in an array, which should be printed afterwards.

// Input format :
// The input consists of an integer value N, representing the size of the integer array that will be created.
// Output format :
// The program prints the squares of numbers from 0 to N-1, separated by a space.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:
// 1 ≤ N ≤ 100

// Sample test cases :
// Input 1 :
// 10
// Output 1 :
// 0 1 4 9 16 25 36 49 64 81
// Input 2 :
// 23
// Output 2 :
// 0 1 4 9 16 25 36 49 64 81 100 121 144 169 196 225 256 289 324 361 400 441 484
// In c lamnguage using #define and SQUARE

#include <stdio.h>
#define SQUARE(x) ((x) * (x))

int main()
{
    int N, i;
    printf("Enter the size of the array (N): ");
    scanf("%d", &N);
    if (N < 1 || N > 100)
    {
        printf("Invalid input. N must be between 1 and 100.\n");
        return 1;
    }
    int squares[N];
    for (i = 0; i < N; i++)
    {
        squares[i] = SQUARE(i);
    }
    printf("Squares of numbers from 0 to %d-1: ", N);
    for (i = 0; i < N; i++)
    {
        printf("%d ", squares[i]);
    }
    printf("\n");
    return 0;
}
