#include <stdio.h>

void swap(int *x, int *y);

int main ()
{
  int a = 100, b = 234;
  
  printf("%d %d\n", a, b);
  swap(&a, &b);
  printf("%d %d\n", a, b);
}

void swap(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}