#include <stdio.h>
#include <string.h>
 
int main() {
  char str1[7] = "Hello ";
  printf("%d", sizeof(str1));
  char str2[] = "World!";

  // Concatenate str2 to str1 (the result is stored in str1)
  strcat(str1, str2);

  // Print str1
  printf("%d", sizeof(str2));
  printf("%s", str1);

  return 0;
}