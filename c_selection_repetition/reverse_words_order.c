#include <stdio.h>

#define MAX 64

int main() {
  char string[MAX], reverse[MAX];
  int length, i, j, start, end;
  length = j = 0;

  printf("Enter a string: ");
  scanf("%[^\n]s", string);

  while (string[length]) length += 1;
  i = end = length - 1;

  for (; i >= 0; i -= 1) {
    if (string[i] != ' ' && i != 0)
      continue;

    for (start = (i == 0 ? i : i + 1); start <= end; start += 1, j += 1)
      reverse[j] = string[start];

    reverse[j] = ' ';
    end = i - 1;
    j += 1;
  }

  reverse[j] = '\0';

  printf("%s", reverse);
}