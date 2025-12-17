/*
 * Routine: A program that swaps the values of two variables (by reference).
 *
 * Author: DannyBimma
 *
 * Copyright (c) 2025 Technomancer Pirate Captain. All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int *pa, int *pb);

int main() {
  int a = 69;
  int b = 420;

  swap(&a, &b);

  printf("main: a = %d, b = %d\n", a, b);

  return EXIT_SUCCESS;
}

void swap(int *pa, int *pb) {
  int temp = *pa;
  *pa = *pb;
  *pb = temp;

  printf("swap: a = %d, b = %d\n", *pa, *pb);
}
