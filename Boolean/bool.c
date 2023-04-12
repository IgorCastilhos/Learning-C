#include <stdbool.h>
#include <stdio.h>

int main() {
  bool isProgrammingFun = true;
  bool isFishTasty = false;

  // Return boolean values
  printf("%d\n", isProgrammingFun);   // Returns 1 (true)
  printf("%d\n", isFishTasty);        // Returns 0 (false) 

  // Return booleans values
  printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
  printf("%d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
  printf("%d", 5 == 55);  // Returns 0 (false) because 5 is not equal to 55 
  return 0;  

}

