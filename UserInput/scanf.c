#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese_Brazil");
  int myNum;

  // Ask the user to type a number
  printf("Escreva um número: \n");

  // Get and save the number the user types
  scanf("%d", &myNum);

  // Print the number the user typed
  printf("Seu número é: %d", myNum);

  return 0;
}