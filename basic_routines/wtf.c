#include <stdio.h>
#include <stdlib.h>

int main() {
  const int i = 69;
  int *p = (int *)&i;
  *p = 420;

  printf("%d\n", i);

  return EXIT_SUCCESS;
}
