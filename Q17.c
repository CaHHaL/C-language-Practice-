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


// Refer to the sample output for the formatting specifications.
// Code constraints :
// In this scenario, the test cases fall under the following constraints:
// 1 ≤ Total elements after resizing (M) ≤ 25
// N < M
// 1 ≤ Each element of the sequence ≤ 100

// Sample test cases :
// Input 1 :
// 1
// 1 
// 5
// 80 15 11 85 
// Output 1 :
// Initial Sequence: 1 
// Resized Sequence: 1 80 15 11 85 


#include <stdio.h>
#include <stdlib.h>

int main() {
    int initialSize, newSize, i;
    int *sequence;

    if (scanf("%d", &initialSize) != 1 || initialSize < 1 || initialSize > 25) {
        printf("Invalid initial size. Please enter a value between 1 and 25.\n");
        return 1;
    }
    sequence = (int *)malloc(initialSize * sizeof(int));
    if (sequence == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < initialSize; i++) {
        if (scanf("%d", &sequence[i]) != 1) {
            free(sequence);  // Free memory on invalid input
            return 1;
        }
    }

    // Get new size
    if (scanf("%d", &newSize) != 1 || newSize <= initialSize) {
        free(sequence);  // Free memory on invalid input
        return 1;
    }

    sequence = (int *)realloc(sequence, newSize * sizeof(int));
    if (sequence == NULL) {
        free(sequence);  
        return 1;
    }

    for (i = initialSize; i < newSize; i++) {
        if (scanf("%d", &sequence[i]) != 1) {
            free(sequence);  
            return 1;
        }
    }
    printf("Initial Sequence: ");
    for (i = 0; i < initialSize; i++) {
        printf("%d ", sequence[i]);
    }
    printf("\n");

    // Display resized sequence
    printf("Resized Sequence: ");
    for (i = 0; i < newSize; i++) {
        printf("%d ", sequence[i]);
    }
    printf("\n");

    // Free memory
    free(sequence);

    return 0;
}