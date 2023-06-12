#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX 50

int main(void) {
  setlocale(LC_ALL,"Portuguese");
  // Verifica quantas vogais tem a string
  char string1[MAX];
  char string2[MAX];
  int x,a=0,e=0,i=0,o=0,u=0;
  printf("Digite um nome: ");
  gets(string1);
  for (x=0;x<MAX;x++){
    if (string1[x]=='a' || string1[x]=='A')
    a++;
    if (string1[x]=='e' || string1[x]=='E')
    e++;
    if (string1[x]=='i' || string1[x]=='I')
    i++;
    if (string1[x]=='o' || string1[x]=='O')
    o++;
    if (string1[x]=='u' || string1[x]=='U')
    u++;
  }
  printf("Esse nome tem %d a",a);
  printf("\nEsse nome tem %d e",e);
  printf("\nEsse nome tem %d i",i);
  printf("\nEsse nome tem %d o",o);
  printf("\nEsse nome tem %d u",u);
  return 0;
}
