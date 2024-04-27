// Karthik is designing a program to manage number sequences.
// He inputs the initial size and elements of the sequence by allocating memory using malloc(). Later, he decides to resize the sequence by providing a new size using realloc(). He then takes the additional integers required for the sequence that will be appended to the initial sequence. The program displays both the initial and resized sequences.
// Help Karthik in developing the program.

// Input format :

// The first line of input consists of an integer N, representing the initial size of the array.
// The second line consists of N space-separated integers, representing the initial elements of the sequence.
// The third line consists of an integer M, representing the new size of the array.
// The fourth line consists of (M-N) space-separated integers, representing the additional elements for the resized sequence.
// Output format :
// The first line displays "Initial Sequence: " followed by the elements of the initial sequence, separated by a space.
// The second line displays "Resized Sequence: " followed by the elements of the resized sequence after the specified resizing.

// Sample test cases :
// Input 1 :
// 1
// 1
// 5
// 80 15 11 85
// Output 1 :
// Initial Sequence: 1
// Resized Sequence: 1 80 15 11 85
// Input 2 :
// 2
// 10 20
// 3
// 2

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;

    scanf("%d", &N);

    int *initial_sequence = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &initial_sequence[i]);
    }

    scanf("%d", &M);

    initial_sequence = (int *)realloc(initial_sequence, M * sizeof(int));

    for (int i = N; i < M; i++)
    {
        scanf("%d", &initial_sequence[i]);
    }

    printf("Initial Sequence:");
    for (int i = 0; i < N; i++)
    {
        printf(" %d", initial_sequence[i]);
    }
    printf("\n");

    printf("Resized Sequence:");
    for (int i = 0; i < M; i++)
    {
        printf(" %d", initial_sequence[i]);
    }
    printf("\n");

    free(initial_sequence);

    return 0;
}
