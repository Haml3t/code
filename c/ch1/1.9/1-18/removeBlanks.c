#include <stdio.h>
#define MAXLINE 1000		/* maximum input line size */

int getLine(char line[], int maxline);
void copy(char to[], char from[]);


/* print longest input line */
main()
{
  int len;			/* current line length */
  int max;			/* maximum length seen so far */
  char line[MAXLINE];		/* current input line */
  char trimmed[MAXLINE];	/* longest line saved here */

  max = 0;
  while ((len = getLine(line, MAXLINE)) > 0){
    copy(trimmed, line);
    printf("%s", line);
  }

  return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim)
{
  int c, i, endBlank, firstBlank;
  endBlank = 0;

  for (i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n' && c!=' ' && c!='\t'; ++i) /* if we encounter a non-blank */
    endBlank = 0;		/* then if there were blanks before, they're not end blanks so they can stay */
    s[i] = c;			/* set the current char of the array to the current char */
  if (c == ' ' || c == '\t'){	/* if we encounter a blank or tab */
    endBlank = 1;		/* then we might be in end blank territory */
    s[i] = c;			/* set the current char of the array to the current char */
    firstBlank = i;		/* record address at which first blank occurred */
  }
  if (c == '\n' && endBlank != 1) {
    s[i] = c;
    ++i;
  }
  else if (c == '\n'){
    s[firstBlank] = c;
    s[firstBlank+1] = '\0';
    return firstBlank;
  }
  s[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
