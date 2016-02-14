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
    wlengths[i] = 0;		/* initialize to 0 words of each length */
  while((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t'){ /* if it's blank */
      state = OUT;		       /* then we're not in a word so if we were in a word before now it's over*/
      ++wlengths[wlength];	       /* so increase the number of words of the previous length */
      wlength = 0;		       /* and now the old word is over so the char count of the current word is 0 */
    }
    else if (state == OUT) {	/* if it's not blank and we're not in a word */
      state = IN;		/* then we're in a word now */
      ++wlength;		/* and that word has at least one character */
    }
    else if (state == IN) {	/* if it's not blank and we're in a word */
      ++wlength;		/* then the word is one more character long */
    }
  } /* we've hit EOF */
  for (i = 0; i < 20; ++i) {
    printf("Words of length %d: ",i);
    for (j = 0; j < wlengths[i]; ++j){
      putchar(x);
    }
    printf("\n");
  }
}
