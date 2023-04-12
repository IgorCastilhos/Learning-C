#include <stdio.h>

int main() {
  int myNumbers[] = {0,1,2,3};
  myNumbers[0] = 33;

  int i;

  for (i = 0; i < 4; i++) {
    printf("%d\n", myNumbers[i]);
  }

  return 0;
}