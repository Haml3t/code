#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float FtoC(int fahr);

/* convert F to C using function */
main()
{
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, FtoC(fahr));
}

/* FtoC: convert temperature in Fahrenheit to Celsius */
float FtoC(int fahr)
{
  return (5.0/9.0)*(fahr-32);
}
