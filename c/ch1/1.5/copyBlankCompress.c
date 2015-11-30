#include <stdio.h>

main()
{
  int c;
  int blanks = 0;
while((c = getchar()) != EOF){
  if (c != ' ')
    blanks = 0;
  if (blanks == 0)
    putchar(c);
  if (c == ' ')
    blanks = 1;
 }
}
