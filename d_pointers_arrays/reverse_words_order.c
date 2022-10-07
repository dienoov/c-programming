#include <stdio.h>
#include <string.h>

#define MAX 64

int main() {
  char str[MAX], *chr;

  printf("Enter a string: ");
  scanf("%[^\n]s", str);

  for (chr = &str[strlen(str) - 1]; *chr; chr -= 1)
    if (*chr == ' ') {
      *chr = '\0';
      printf("%s ", chr + 1);
    }

  printf("%s", str);
}