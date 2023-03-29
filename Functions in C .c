#include <stdio.h>
int add(int a, int b, int c, int d)
{
    int tmp;
    if (a > b && a > c && a > d)
    {
        tmp = a;
    }
    if (b > a && b > c && b > d)
    {
        tmp = b;
    }
    if (c > a && c > b && c > d)
    {
        tmp = c;
    }
    if (d > a && d > b && d > c)
    {
        tmp = d;
    }

    return tmp;
}
int main()
{
    int a, b, c, d, p, tmp;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int add();
    printf("%d\n", add(a, b, c, d));
}

