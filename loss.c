// 7. Loss Percentage
#include <stdio.h>
#include <math.h> 
int main ()
{
    int x, y;
    double p;
    scanf("%d %d", &x, &y);
    p = ((x - y) * 100.0) / x;
    printf("%.2lf", p);
    return 0;
}
