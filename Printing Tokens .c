#include <stdio.h>
#include <string.h>
int main() {
  int l, i;
  char s[1000];
  gets(s);
  l = strlen(s);
  for (i = 0; i < l; i++) {
    if (s[i] == ' ') {
      s[i] = '\n';
    }
  }
  printf("%s\n", s);
}
