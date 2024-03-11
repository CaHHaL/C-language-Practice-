#include <stdio.h>
int main()
{
    const int BASE = 10;
    long long num, n;
    int i, lastDigit;
    int freq[BASE];
    printf("Enter the number:");
    scanf("%lld", &num);
    for (i = 0; i < BASE; i++)
    {
        freq[i] = 0;
    }
    n = num;
    while (n != 0)
    {
        lastDigit = n % 10;
        n /= 10;
        freq[lastDigit]++;
    }
    for (i = 0; i < BASE; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }

    return 0;
}