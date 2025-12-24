/*
 * Routine: A display of the static keyword in C23 and how it works.
 *
 * Author: DannyBimma
 *
 * Copyright (c) 2025 Technomancer Pirate Captain. All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>

void increment(void) {
  static int counter = 0; // Static basically gives counter file scope

  counter++;

  printf("counter: %d\n", counter);
}

int main(void) {
  for (int i = 0; i < 5; ++i)
    increment();

  return EXIT_SUCCESS;
}
