#include <stdio.h>

int main(void)
{
  char n[10];

  while (1)
  {
    printf("Enter: "); 
    gets(n);
    if ('A' <= n[0] && n <= 'Z')
      printf("Small letter of % is %c", n, n + 32);

    else if ('a' <= n && n <= 'z')
      printf("Capital letter of %c is %c", n, n - 32);

    else if(n == '\n')
    break;

    else
      printf("The entered character is not an alphabet.\n");
  }

  return 0;
}

Enter: NOW
small letter of NOW is now
Enter: nOW
proper 