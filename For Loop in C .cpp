#include <stdio.h>
#include <string.h>
int main() {
  int i, a, b;
  scanf("%d%d", &a, &b);
  char s[1000][1000] = {" ",    "one", "two",   "three", "four",
                        "five", "six", "seven", "eight", "nine"};
  for (i = a; i <= b; i++) {
    if (i <= 9) {
      printf("%s\n", s[i]);
    } else if (i > 9 && i % 2 == 0) {
      printf("even\n");
    } else if (i > 9 && i % 2 != 0) {
      printf("odd\n");
    }
  }
  return 0;
}

