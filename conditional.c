
// 14. Complex Conditionals
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    if ((n % 3) == 0)
    {
        printf("pling");
    }
    if ((n % 5) == 0)
    {
        printf("plang");
    }
    if ((n % 7) == 0)
    {
        printf("plong");
    }
    if (((n%3) != 0) && ((n%5) != 0) && ((n%7) != 0))
    {
        printf("%d", n);
    }
}
