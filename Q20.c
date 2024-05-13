// Imagine Fiona is managing a customer feedback system for a large online platform. Users submit feedback through a form, and Fiona receives a string containing various characters, including feedback text.
// Fiona wants to quickly identify the first unique character in the feedback string to address specific issues raised by users. Write a program using character arithmetic to help Fiona pinpoint and display the first non-repeating character in the feedback string.

// Input format :
// The input consists of the string, representing the feedback submitted by the customer.
// Output format :
// If there is a non-repeating character present in the input string, the output displays "The first non-repeating character is: " followed by that character.
// If there is no non-repeating character present in the input string, the output displays "No non-repeating character found in the string"

// Refer to the sample output for the formatting specifications.
// Code constraints :
// In this scenario, the test cases fall under the following constraints
// 1 ≤ Length of String ≤ 100
// Input characters are case-sensitive.
// Sample test cases :
// Input 1 :
// Great service! Quick response and helpful assistance
// Output 1 :
// The first non-repeating character is: G
// Input 2 :
// aaabbbcccssdd
// Output 2 :
// No non-repeating character found in the string

// Input 3 :
// The website layout is user-friendly and easy to navigate
// Output 3 :
// The first non-repeating character is: T

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_STRING_LENGTH 101

int main()
{
    char feedback[MAX_STRING_LENGTH];
    int char_counts[256] = {0};
    fgets(feedback, sizeof(feedback), stdin);
    feedback[strcspn(feedback, "\n")] = '\0';
    for (int i = 0; feedback[i] != '\0'; i++)
    {
        char_counts[tolower(feedback[i])]++; // Convert to lowercase for case-insensitive check
    }

    for (int i = 0; feedback[i] != '\0'; i++)
    {
        if (char_counts[tolower(feedback[i])] == 1)
        {
            printf("The first non-repeating character is: %c\n", feedback[i]);
            return 0;
        }
    }

    // No non-repeating character found
    printf("No non-repeating character found in the string\n");

    return 0;
}