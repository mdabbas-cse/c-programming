#include <stdio.h>

/**
 * @brief binary_search - binary search
 * @param array
 * @param n - size of array
 * @param search_value - value to search
 * @return index of value -1 if not found or index of value
 */
int binary_search(int array[], int n, int search_value)
{
  int start = 0;
  int end = n - 1;
  int mid;

  while (start <= end)
  {
    mid = (start + end) / 2;
    if (search_value == array[mid])
      return mid; // index number of value
    if (search_value < array[mid])
      end = mid - 1; //
    else
      start = mid + 1;
  }
  return -1; // not found
}

void main()
{
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(array) / sizeof(array[0]);
  int search_value = 5;
  int result = binary_search(array, n, search_value);
  (result == -1)
      ? printf("Element is not present in array")
      : printf("Element is present at index %d", result);
}