// George, a secret agent, needs a program to encrypt a character using a shifting method. The program should prompt him to enter an alphabet and a shift amount as register storage class inputs.
// The encrypted character is obtained by shifting the input alphabet by the specified amount in a circular manner. Uppercase and lowercase letters wrap around, ensuring a seamless shift within the alphabet.
// Example: If the character 'y' wants to be rotated 6 times, it wraps around the alphabet after reaching 'z'. The shifting process results in the output 'e'.
// Input format :
// The input consists of a character c representing the alphabet on which shifting happens and an integer n representing the number of times it has to be shifted, separated by a space.
// Output format :
// The output prints the character after shifting the input alphabet (to its right) n times.
// If c is not an alphabet, the output prints the input character as such without shifting.
#include <stdio.h>
char encrypt(register char c, register int n)
{
    if ('A' <= c && c <= 'Z')
    {
        return (c - 'A' + n) % 26 + 'A';
    }
    else if ('a' <= c && c <= 'z')
    {
        return (c - 'a' + n) % 26 + 'a';
    }
    else
    {
        return c;
    }
}
int main()
{
    register char c;
    register int n;
    scanf("%c %d", &c, &n);
    printf("%c\n", encrypt(c, n));
    return 0;
}