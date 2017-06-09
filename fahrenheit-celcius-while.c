#include <stdio.h>

int main() {
  float fahrenheit, celcius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 10;

  printf("\nFahrenheit to Celcius Conversion Table\n\n");

  fahrenheit = lower;
  while (fahrenheit <= upper) {
    celcius = 5.0 * (fahrenheit - 32) / 9.0;
    printf("%6.1f %5.0f\n", celcius, fahrenheit);
    fahrenheit = fahrenheit + step;
  }
}
