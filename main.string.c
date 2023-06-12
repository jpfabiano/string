#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX 50

int main(void) {
  setlocale(LC_ALL,"Portuguese");
  // Imprime uma string invertida 
  char string1[MAX];
  int x,a;
  printf("Digite um nome: ");
  gets(string1);
  for (x=strlen(string1);x>=0;x--){
  printf("%c",string1[x]);
  }
return 0;
}
