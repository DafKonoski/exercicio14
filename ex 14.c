//Informe dois nomes, imprimir o tamanho de cada um e mostrálos.

#include <stdio.h>

int main() {

  char nome1[20];
  char nome2[20];
  int tam1;
  int tam2;
  
  printf("Digite um nome:\n");
  gets(nome1);
  printf("Digite outro nome:\n");
  gets(nome2);

  tam1 = strlen(nome1);
  tam2 = strlen(nome2);

  printf("O nome: %s tem %d letras\n", nome1, tam1);
  printf("O nome: %s tem %d letras\n", nome2, tam2);
  
}