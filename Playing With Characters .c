#include <stdio.h>
#include <string.h>
int main() {
  char s[1000];
  char ch;
  char p[1000];
  scanf("%c", &ch);
  scanf("%s", s);
  getchar();
  gets(p);
  printf("%c\n", ch);
  printf("%s\n", s);
  puts(p);
}
