#include <stdio.h>

int collatz_seq_l(long long n)
{
    int length = 1;

    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        length++;
    }

    return length;
}

int main()
{
    long long start, end;
    scanf("%lld %lld", &start, &end);

    if (start <= 0 || end <= 0)
    {
        printf("0\n");
        return 0;
    }

    int max_length = 0;

    for (long long i = start; i <= end; i++)
    {
        int length = collatz_seq_l(i);
        if (length > max_length)
        {
            max_length = length;
        }
    }

    printf("%d\n", max_length);

    return 0;
}