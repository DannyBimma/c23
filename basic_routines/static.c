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
