#include <stdio.h>

int x;//variable global
int a[];      //
void mas_dos(){
 x+=2;//variable local de mas_dos
}

void mas_dos_arr(int a[], int n){
  for (int i = 0; i < n; i++) {
    a[i]+=2;
  }
}

int main(void){
  x = 6;
  a[0]=1;
  a[1]=2;
  a[2]=3;
  a[3]=4;
  int n = 4;
printf("x antes del cambio %d\n", x);
  mas_dos(x);
  printf("x despues del cambio: %d\n", x);
  mas_dos_arr(a, x);
  for(int i = 0; i < x - 4; i++){
    printf("%d\n", a[i]);
  }
return 0;
}
