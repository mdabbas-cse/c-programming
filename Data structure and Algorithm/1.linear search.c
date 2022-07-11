#include <stdio.h>
/*
  @function linear_search
  @param {int} arr[]
  @param {int} n - size of array
  @param {int} searchElement - search element
*/

int linear_search(int arr[], int n, int x)
{
  int i;
  for (i = 0; i < n; i++)
    if (arr[i] == x)
      return i;
  return -1;
}

// Driver code
int main(void)
{
  int arr[] = {2, 3, 4, 10, 40};
  int x;
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("Enter the element to be searched: ");
  scanf("%d", &x);

  // Function call
  int result = linear_search(arr, n, x);
  (result == -1)
      ? printf("Element is not present in array")
      : printf("Element is present at index %d", result);
  return 0;
}
