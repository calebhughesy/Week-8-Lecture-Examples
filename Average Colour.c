#include <stdio.h>

void zeroInt(int *x);

main ()
{
  int testint = 0;
  printf("%d\n", testInt);
  zeroInt(&testInt);
  printf("%d\n", testInt);
}

void zeroInt(int *x)
{
    *x = 0;
}
