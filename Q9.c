// Maria, an architect, is working on designing a unique garden feature. She plans to include tetrahedron-shaped sculptures of varying sizes.
// Write a program to assist Maria in calculating the volumes of these tetrahedrons based on their different edge lengths. The program should take the edge length n as input and output the corresponding volume for her architectural designs.
// Formula: Volume of a tetrahedron = n3 / 6√2 where n is the edge length.
// Note: The power and square root are calculated using pow() and sqrt() inbuilt functions.
// Input format :
// The input consists of a double value n, representing the edge length of the tetrahedron sculpture.
// Output format :
// The output prints "Volume of the tetrahedron: " followed by a double value representing the volume of the tetrahedron sculpture, rounded off to two decimal places.
// Refer to the sample output for the formatting specifications.
// Code constraints :
// In the given scenario, the test cases fall under the following constraints:
// 1.0 ≤ n ≤ 20.0
#include <stdio.h>
#include <math.h>
int main()
{
    double n;
    printf("Enter the edge length of the tetrahedron: ");
    scanf("%lf", &n);

    double volume = pow(n, 3) / (6 * sqrt(2));

    printf("Volume of the tetrahedron: %.2lf\n", volume);

    return 0;
}