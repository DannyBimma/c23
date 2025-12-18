/*
 * Routine: A program that swaps the values of two variables (by reference).
 *
 * Author: DannyBimma
 *
 * Copyright (c) 2025 Technomancer Pirate Captain. All Rights Reserved.
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void swap(int *pa, int *pb);
bool swapped(int *pa, int *pb);

int main() {
  int a = 69;
  int b = 420;

  swap(&a, &b);

  printf("main: a = %d, b = %d\n", a, b);
  printf("main: a = %p, b = %p\n", &a, &b);

  if (swapped(&a, &b)) {
    printf("main: Swapped successfully!\n");
  }

  return EXIT_SUCCESS;
}

void swap(int *pa, int *pb) {
  int temp = *pa;
  *pa = *pb;
  *pb = temp;

  // Print values
  printf("swap: a = %d, b = %d\n", *pa, *pb);
  // Print pointer addresses
  printf("swap: pa = %p, pb = %p\n", pa, pb);
}

// Check if values were swapped
bool swapped(int *pa, int *pb) {
  if (*pa == 420 && *pb == 69)
    return true;
  else
    return false;
}
