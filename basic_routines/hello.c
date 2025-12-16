/*
 * Routine: A program that prints the greeting "Hello, world!" to
 * the console.
 *
 * Author: DannyBimma
 *
 * Copyright (c) 2025 Technomancer Pirate Captain. All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  // Use the return val of puts() to practice defensive programming
  if ((puts("Hello, world!") == EOF))
    return EXIT_FAILURE;

  return EXIT_SUCCESS;
}
