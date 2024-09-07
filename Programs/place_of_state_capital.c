// Input name of apace , which is name of a state or its capital of india, the program will prinnt the opposite
#include <stdio.h>
#include <string.h>

int main(void)
{
  int i, f = 0;
  char name[10];
  char places[][20] = {"Assam", "Dispur", "Bihar", "Patna", "Goa", "Panaji",
                       "Gujarat", "Gandhinagar", "Kerala", "Thiruvananthapuram",
                       "West Bengal", "Kolkata", "Odisha", "Bubaneswar"};
  int n = sizeof(places) / sizeof(places[0]);
  while (1)
  {
    printf("Enter State/Capital: ");
    gets(name);

    if (strcmpi(name, "end") == 0)
    {
      puts("Goodbye");
      break;
    }

    for (i = 0; i < n; i++)
    {
      if (strcmpi(name, places[i]) == 0)
      {
        if (i % 2 == 0) // if it is a state
          printf("%s is the capital of %s\n", places[i], places[i + 1]);

        else // if it is a capital
          printf("Capital of %s is %s\n", places[i], places[i - 1]);

        break;
      }
    }

    if (i == n) // if place not found
      puts("Place not found");
  }

  return 0;
}