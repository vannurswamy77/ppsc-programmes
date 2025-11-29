// 13. App Developers
#include <stdio.h>
int main ()
{
    int x, y, r, a, b, c;
    scanf("%d %d %d %d", &x, &y, &a, &r);
    c = r/30;
    c = (c + a) % x;
    c = (c - a) % y;
    b = (b + 1);
    printf("%d", b);
}
