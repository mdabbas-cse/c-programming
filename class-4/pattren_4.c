#include <stdio.h>
int main()
{
  int i, j;
  int n = 5;

  for (i = n; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%c ", j + 64);
    }
    printf("\n");
  }
  return 0;
}