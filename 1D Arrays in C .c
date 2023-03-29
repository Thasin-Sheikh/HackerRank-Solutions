#include <stdio.h>
int main() {
  int arr[1000];
  int n, sum = 0, i, j;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    sum = sum + arr[i];
  }
  printf("%d\n", sum);
}

