#include <stdio.h>

#define IN 1	     /* inside a word */
#define OUT 0	     /* outside a word */

/* make histogram of lengths of words in input */
main()
{
  int c, i, j, x, wlength, state;
  int wlengths[20];

  state = OUT;
  wlength = 0;
  x = 'x';
  for (i = 0; i <20; ++i)
    wlengths[i] = 0;
  while((c = getchar()) != EOF) {
    if (c = ' ' || c == '\n' || '\t'){
      state = OUT;
      ++wlengths[wlength];
      wlength = 0;
    }
    else if (state == OUT) {
      state = IN;
    }
    else if (state == IN) {
      ++wlength;
    }
  }
  for (i = 0; i < 20; ++i) {
    for (j = 0; j < wlengths[i]; ++j){
      putchar(x);
    }
    printf("\n");
  }
}
