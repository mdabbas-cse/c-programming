#include <stdio.h>
int main()
{
  int i, j;
  int n = 5;

  for (i = n; i >= 1; i--)
  {
    for (j = i; j >= 1; j--)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}