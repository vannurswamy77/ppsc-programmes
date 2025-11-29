#include <stdio.h>
int main()
{
    double d, h, g, s;
    scanf("%lf", &s);
    if (s <= 10000)
    {
        d = s * 0.8;
        h = s * 0.2;
    }
    else if (s <= 20000)
    {
        d = s * 0.75;
        h = s * 0.25;
    }
    else
    {
        d = s * 0.95;
        h = s * 0.3;
    }
    g = d + h;
    printf("%.2lf", g);
    return 0;
}