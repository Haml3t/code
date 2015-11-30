#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300; float version */
main()
{
  float fahr, celsius;
  float lower, upper;
  int step;

  lower = -17.8;			/* lower limit of temperature table */
  upper = 148.9;			/* upper limit */
  step = 20;			/* step size */

  celsius = lower;
  printf("%s\t%s\n", "Celsius", "Fahrenheit");
  while (celsius <= upper) {
    fahr = (9.0/5.0) * (celsius) + 32.0;
    printf("%5.1f\t%3.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
