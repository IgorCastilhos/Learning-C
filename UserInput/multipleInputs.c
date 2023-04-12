#include <stdio.h>

int main()
{
  // Cria uma variável int e char
  int myNum;
  char myChar;

  // Pede pro usuário escrever um número e um caractere
  printf("Type a number AND a character and press enter: \n");

  // Pega e salva o número E o caractere que o usuário escrever
  scanf("%d %c", &myNum, &myChar);

  // Printa o número
  printf("Your number is: %d\n", myNum);

  // Printa o caractere
  printf("Your character is: %c\n", myChar);

  return 0;
}
