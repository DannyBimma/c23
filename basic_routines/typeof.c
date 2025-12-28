/*
 * Routine: A program that shows the power if the typeof operator in C23.
 *
 * Author: DannyBimma
 *
 * Copyright (c) 2025 Technomancer Pirate Captain. All Rights Reserved.
 */

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
  typeof_unqual(a) plain_i;           // plain_i is a plain int
  typeof(_Atomic typeof(i)) atomic_i; // atomic_i is an _Atomic int
  typeof(strawhats)
      strawhats_array; // strawhats_array is an array of const char* const
  typeof_unqual(strawhats)
      strawhats_array2; // strawhats_array2 is an array of const char* const

  printf("main: plain_i = %d, atomic_i = %d, strawhats_array = %p, "
         "strawhats_array2 = %p\n",
         plain_i, atomic_i, strawhats_array, strawhats_array2);
}
