#include <stdio.h>
int main()
{
  int i, j;
  int n = 5;

  for (i = 1; i <= n; i++)
  {
    for (int k = 1; k <= n - i; k++)
      printf("  ");
    for (j = 1; j <= 2 * i - 1; j++)
    {
      if (j == 1 || j == 2 * i - 1 || i == n)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
  return 0;
}