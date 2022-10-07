#include <stdio.h>

#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

int romanToInt(char *s) {
  int val = 0;

  do
    switch (*s) {
      case 'I':
        val += (*(s + 1) == 'V' || *(s + 1) == 'X') ? -I : I;
        break;
      case 'V':
        val += V;
        break;
      case 'X':
        val += (*(s + 1) == 'L' || *(s + 1) == 'C') ? -X : X;
        break;
      case 'L':
        val += L;
        break;
      case 'C':
        val += (*(s + 1) == 'D' || *(s + 1) == 'M') ? -C : C;
        break;
      case 'D':
        val += D;
        break;
      case 'M':
        val += M;
        break;
    }
  while (*s++);

  return val;
}

int main() {
  char s[] = "MCMXVII";
  printf("%d", romanToInt(s));
  return 0;
}
