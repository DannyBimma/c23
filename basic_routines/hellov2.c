/*
 * Routine: A program that prints the greeting "Hello, world!" to
 * the console (version 2.0)
 *
 * Author: DannyBimma
 *
 * Copyright (c) 2025 Technomancer Pirate Captain. All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>

// There are more ways to print Hello, world in C than they are stars in the sky
int main(void) {
  // printf returns a negative value if there's an error
  // So defend against the unknown like this
  if (printf("%sHello, world!\n", "") < 0)
    return EXIT_FAILURE;

  return EXIT_SUCCESS;
}
