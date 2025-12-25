/*
 * Routine: A display of the auto keyword in C23 and how it works.
 *
 * Author: DannyBimma
 *
 * Copyright (c) 2025 Technomancer Pirate Captain. All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  auto i = 420;
  auto p = &i;
  auto pp = &p;
  auto s = "Hello, world!";

  printf("i = %d\n", i);
  printf("p = %d\n", *p);
  printf("pp = %p\n", pp);
  printf("s = %s\n", s);

  return EXIT_SUCCESS;
}
