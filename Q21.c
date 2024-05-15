
// Emilia, a passionate computer science explorer, is on a journey to master string manipulation. She has devised a unique pattern decoding system and needs your help to implement it. Your task is to write a program that takes a string as input and decodes it according to the following rules:
// If a digit 'n' is encountered, it means that the substring enclosed in square brackets '[' and ']' should be repeated 'n' times.
// If a pair of square brackets is encountered without a preceding digit, the enclosed substring should be repeated once.

// Example
// Input: 
// 3[Hello]2[World]
// Output:
// HelloHelloHelloWorldWorld
// Explanation: In this example, the substring "Hello" is repeated three times, and "World" is repeated two times as indicated by the digits preceding the square brackets.

// Input format :

// The input is a single line string (k) containing alphanumeric characters, square brackets ('[' and ']'), and digits ('0'-'9').

// Output format :

// The output displays a single line string representing the decoded version of the input string.
// Refer to the sample output for the formatting specifications.

// Code constraints :

// In the given scenario, the test cases fall under the following constraints:

// 3 ≤ k ≤ 15

// Sample test cases :
// Input 1 :
// 3[Hello]2[World]
// Output 1 :
// HelloHelloHelloWorldWorld

#include <stdio.h>
#include <stdlib.h>

void decode(char *str, int start, int end) {
    int i, j, count = 0;
    char num[5];
    
    for (i = start; i < end; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            num[count++] = str[i];
        } else if (str[i] == '[') {
            num[count] = '\0';
            int repeat = atoi(num);
            int bracket_count = 1;
            int j = i + 1;
            
            while (bracket_count != 0) {
                if (str[j] == '[') {
                    bracket_count++;
                } else if (str[j] == ']') {
                    bracket_count--;
                }
                j++;
            }
            
            for (int k = 0; k < repeat; k++) {
                decode(str, i + 1, j - 1);
            }
            
            i = j - 1;
            count = 0;
        } else {
            printf("%c", str[i]);
        }
    }
}

int main() {
    char str[16];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    decode(str, 0, strlen(str));
    
    return 0;
}
