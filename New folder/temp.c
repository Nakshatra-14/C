#include <stdio.h>

int main() {
  int temp;
  printf("Enter the temperature in celsius: ");
  scanf("%d", &temp);
  float temp2 = 1.8;
  float temp3 = temp * temp2;
  float f = temp3 + 32;
  printf("The value of temperature: %d ", temp);
  printf("in Fahrenheit %f°F", f);
  return 0;
}