#include <stdio.h>
int main()
{
    int a, b, i = 1, j = 1, x, y, n = 0, m = 0;
    scanf("%d %d", &a, &b);
    while (i < a)
    {
        x = a % i;
        if (x == 0)
        {
            n = n + i;
        }
        i++;
    }
    while (j < b)
    {
        y = b % j;
        if (y == 0)
        {
            m = m + j;
        }
        j++;
    }
    if ((n == b) && (m == a))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
    return 0;
}