#include <stdio.h>

int main()
{
  int myAge = 22;    // Variable declaration
  int *ptr = &myAge; // Pointer declaration

  // Reference: Output the memory address of myAge with the pointer (0061FF18)
  printf("%p\n", ptr);

  // Dereference: Output the value of myAge with the pointer (22)
  printf("%d\n", *ptr);

  return 0;
}