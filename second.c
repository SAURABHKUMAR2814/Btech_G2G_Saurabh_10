#include <stdio.h>
int main()
{
    int a, b, c, d, e, s, p;
    printf("ENTER MARKS OF FIVE SUBJECTS", "%d%d%d%d%d");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    s = a + b + c + d + e;
    printf("sum is %d", s);
    p = s / 5;
    printf("\npercentage is %d", p);
    return 0;
}
