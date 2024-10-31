/*
 *   Copyright (c) 2024 benni
 *   All rights reserved.
 */
#include <stdio.h>

int main() {
  int meaning_of_life = 42;
  int *pointer_to_mol = &meaning_of_life;
  int value_at_pointer = *pointer_to_mol;
  printf("pointer_to_mol %p\n", pointer_to_mol);
  printf("*pointer_to_mol %d\n", *pointer_to_mol);
  printf("Hello World %d\n", value_at_pointer);

  return 0;
}
