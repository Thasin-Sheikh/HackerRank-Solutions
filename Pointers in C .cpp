#include <stdio.h>
int main() {
  int a, b, sum, diff;
  scanf("%d%d", &a, &b);
  sum = a + b;
  if (a > b) {
    diff = a - b;
  } else {
    diff = -(a - b);
  }
  printf("%d\n%d", sum, diff);
  return 0;
}
