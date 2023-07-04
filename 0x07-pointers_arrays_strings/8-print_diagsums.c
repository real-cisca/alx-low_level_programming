#include <stdio.h>

void print_diagsums(int *a, int size) {
  int diag1_sum = a[0] + a[size - 1];
  int diag2_sum = a[size - 1];
  
  int i;
  
  for (i = 1; i < size - 1; i++) {
    diag1_sum += a[i * size + i];
    diag2_sum += a[i * size + (size - 1 - i)];
  }
  printf("%d, %d\n", diag1_sum, diag2_sum);
}
