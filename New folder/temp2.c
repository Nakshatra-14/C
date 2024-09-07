#include <stdio.h>

int main() {
  int temp;
  char city;
  // printf("Enter the name of the city: ");
  // scanf("%c", &city);
  printf("Enter the temperature in Fahrenheit: ");
  scanf("%d", &temp);
  int temp2 = temp - 32;
  float c = temp2 * 5/9;
  printf("The value of temperature at %d ", temp); 
  //printf("%d°F", temp);
  printf("is %f°C", c);
  return 0;
}