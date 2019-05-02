#include <stdio.h>

void mean(int *x, int *y, int *z);

int main ()
{
  int a = 1, b = 2, c = 3;
  
  printf("%d %d %d\n", a, b, c);
  mean(&a, &b, &c);
  printf("%d %d %d\n", a, b, c);
  
  return 0;
}

void mean(int *x, int *y, int *z)
{
    *x = (int)round((*x + *y + *z)/ 3.0);
    *y = 0;
    *z = 0;
}