// Shabu is learning programming, and she recently encountered a problem that requires her to find the sum of all the numbers in a given string. She decided to write a program to automate this task.
// Write a program that takes a string as input and calculates the sum of all the numerical values present in the string.
// Example:

// Input:
// @1b23C450
// Output:
// 474

// Explanation: The numbers present in the string are 1, 23, and 450. So their sum 1+23+450 = 474 is the output.
// Input format :
// The input consists of a string containing a mix of alphabets and numerical values.
// Output format :
// The output displays an integer representing the sum of all the numerical values present in the input string.

// Refer to the sample output for the formatting specifications.
// Code constraints :
// In the given scenario, the test cases fall under the following constraints:
// 5 ≤ length of the string ≤ 20
// Sample test cases :
// Input 1 :
// @1b23C450
// Output 1 :
// 474
// Input 2 :
// a1B2c
// Output 2 :
// 3
// Input 3 :
// a2b3c4d5e6f7g8h8710
// Output 3 :
// 8745



#include <stdio.h>
#include <ctype.h>

int main() {
    char str[21];
    int sum = 0, num = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            num = num * 10 + (str[i] - '0');
        } else {
            sum += num;
            num = 0;
        }
    }
    
    sum += num;
    
    printf("%d\n", sum);
    
    return 0;
}
