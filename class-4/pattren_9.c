#include <stdio.h>
int main()
{
  int i, j;
  int n = 5;

  for (i = 1; i <= n; i++)
  {
    for (int k = 1; k <= n - i; k++)
      printf("  ");
    for (j = 1; j <= i; j++)
      printf("* ");
    for (j = i - 1; j >= 1; j--)
      printf("* ");
    printf("\n");
  }
  for (i = n - 1; i >= 1; i--)
  {
    for (int k = 1; k <= n - i; k++)
      printf("  ");
    for (j = 1; j <= i; j++)
      printf("* ");
    for (j = i - 1; j >= 1; j--)
      printf("* ");
    printf("\n");
  }
  return 0;
}