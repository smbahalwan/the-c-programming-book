#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP  20
/* print Fahrenheit-Celcius table */

int main() {
  int fahr;

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
