/*
 *   Copyright (c) 2024 benni
 *   All rights reserved.
 */
#include <stdio.h>

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr;         // 'arr' decays to 'int*'
  int value = *(arr + 2); // 'arr' decays to 'int*'
  int *value2 = arr + 2;
  printf("not pointer value %d\n", value);
  printf("pointer value2 %d\n", *value2);
  printf("pointer ptr %d\n", *ptr);

  return 0;
}
