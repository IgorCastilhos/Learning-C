// Access the Elements of a 2D Array
// #include <stdio.h>

// int main() {
//   int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
//   printf("%d", matrix[0][2]);
 
//   return 0;
// }

// Change elements in a 2D Array
// #include <stdio.h>

// int main() {
//   int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
//   matrix[0][0] = 9;
//   printf("%d", matrix[0][0]);  // Now outputs 9 instead of 1
 
//   return 0;
// }

// Loop Through a 2D Array
#include <stdio.h>

int main() {
  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d\n", matrix[i][j]);
    }
  }
  
  return 0;
}