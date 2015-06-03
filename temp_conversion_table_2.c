#include <stdio.h>

/* print Fahrenheit-Celsius table, floating point version, with heading */

main(){
  float fahr, celsius;
  float lower, upper, step;

  lower = -120;			/* lower limit of temperature scale */
  upper = 300;			/* upper limit of temperature scale */
  step = 20;			/* step size */

  printf("Celsius to Fahrenheit Conversion Table\n");
  celsius  = lower;
  while (celsius <= upper) {
    fahr = (9.0/5.0) * celsius + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
