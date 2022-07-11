#include <stdio.h>

/**
 * @brief binary_search - binary search with recursive
 * @param array - array to search
 * @param start - for start index of array
 * @param end - for end index of array
 * @param search_value - value to search
 * @return index of value -1 if not found or index of value
 */
int binary_search(int array[], int start, int end, int search_value)
{
  if (start <= end)
  {
    int mid = (start + end) / 2;
    if (search_value == array[mid])
      return mid;
    else if (search_value < array[mid])
      return binary_search(array, start, mid - 1, search_value);
    else
      return binary_search(array, mid + 1, end, search_value);
  }
  return -1; // not found
}

void main()
{
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(array) / sizeof(array[0]);
  int search_value = 11;
  int result = binary_search(array, 0, n - 1, search_value);
  (result == -1)
      ? printf("Element is not present in array")
      : printf("Element is present at index %d", result);
}