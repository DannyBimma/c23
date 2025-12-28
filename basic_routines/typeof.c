/*
 * Routine: A program that shows the power if the typeof operator in C23.
 *
 * Author: DannyBimma
 *
 * Copyright (c) 2025 Technomancer Pirate Captain. All Rights Reserved.
 */

#include <stdatomic.h>
#include <stdio.h>
#include <stdlib.h>

const _Atomic int a = 69;
const int i = 420;

const char *const strawhats[] = {
    "Luffy",
    "Zoro",
    "Nami",
    "Usopp",
};

typeof_unqual(i) main() {
  typeof_unqual(a) plain_i;                      // plain_i is a plain int
  typeof(_Atomic typeof_unqual(i)) atomic_i = 0; // atomic_i is an _Atomic int
  typeof(strawhats) strawhats_array =
      {}; // strawhats_array is an array of const char* const
  typeof_unqual(strawhats)
      strawhats_array2; // strawhats_array2 is an array of const char* const

  printf("main:\n plain_i = %d\n atomic_i = %d\n strawhats_array = %p\n "
         "strawhats_array2 = %p\n",
         (int)plain_i, atomic_load(&atomic_i), (void *)strawhats_array,
         (void *)strawhats_array2);
}
