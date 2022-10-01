#include <stdio.h>

#define MAX_LENGTH 256

int main() {
  char str[MAX_LENGTH], *chr;
  int vowels = 0, consonants = 0;

  printf("Enter a string: ");
  fgets(str, MAX_LENGTH, stdin);

  for (chr = str; *chr; chr += 1) {
    if (*chr >= 'A' && *chr <= 'Z')
      *chr += 32;

    switch (*chr) {
      case 'a': case 'i': case 'u': case 'e': case 'o':
        vowels += 1;
        break;
      default:
        if (*chr >= 'a' && *chr <= 'z')
          consonants += 1;
    }
  }

  printf("Number of vowels: %d\n", vowels);
  printf("Number of consonants: %d", consonants);
}