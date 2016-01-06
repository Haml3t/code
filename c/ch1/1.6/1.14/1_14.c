#include <stdio.h>

/* print a histogram of frequencies of each character from input */
main(){
  int c, i, j, x;
  int nchar[100];

  x = 'x';
  for (i = 0; i < 100; ++i)
    nchar[i] = 0;

  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '99')
      ++nchar[c-'0'];

  for (i = 0; i < 100; ++i) {
    for (j = 0; j < nchar[i]; ++j) {
      putchar(x);
    }
    printf("\n");
  }
}
