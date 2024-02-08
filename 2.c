#include<stdio.h>
#include <stdlib.h>
void F_strcpy(char *dest, const char *src){                     
  int i = 0;                                                    
  while(src[i] != '\0'){
  dest[i]=src[i];
    i++;
  }

}
int main(){
  char origen[] = "Hola Mundo";
  char destino[50];

  F_strcpy(destino,origen);

  printf("%s\n", destino);

  return 0;
}
