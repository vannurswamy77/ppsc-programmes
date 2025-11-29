#include <stdio.h>
int main()
{
    int a, b, i, n, r, s, c1, c2;
    scanf("%d %d", &a, &b);
    i = a;
    while (i <= b)
    {
        n = i;
        c1 = 0;
        c2 = 0;
        while (n != 0)
        {
            r = n % 10;
            if (r == 0)
            {
                c1++;
            }
            s = i % r;
            if (s != 0)
            {
                c2++;
            }
            n = n / 10;
        }
        if ((c1 == 0) && (c2 == 0))
        {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}