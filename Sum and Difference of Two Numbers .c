#include <stdio.h>
int main() {
  int a, b, sum1, dif1;
  float c, d, sum2, dif2;
  scanf("%d%d", &a, &b);
  scanf("%f%f", &c, &d);
  sum1 = a + b;
  dif1 = a - b;
  sum2 = c + d;
  dif2 = c - d;
  printf("%d %d\n", sum1, dif1);
  printf("%.1f %.1f\n", sum2, dif2);
}