
// 5. Century Check
#include <stdio.h>
int main ()
{
    int year, x;
    scanf("%d", &year);
    x = year % 100;
    if (x == 0)
    {
        x = year / 100;
        printf("%d %d", year, x);
    }
    else
    {
        x = (year/100) + 1;
        printf("%d %d", year, x);
    }
}

