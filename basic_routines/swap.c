/*
 * Routine: A program that swaps the values of two variables.
 *
 * Author: DannyBimma
 *
 * Copyright (c) 2025 Technomancer Pirate Captain. All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int, int);

int main() {
  int a = 69;
  int b = 420;

  swap(a, b);

  printf("main: a = %d, b = %d\n", a, b);

  return EXIT_SUCCESS;
}

void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;

  printf("swap: a = %d, b = %d\n", a, b);
}
