#include<stdio.h>
#include<stdlib.h>

int mcd(int a, int b){
  if(b == 0) return a;
  return mcd(b, a % b);
}
int main(int argc, char *argv[]){
int a = atoi(argv[1]);
int b = atoi(argv[2]);
printf("mcd de %d y %d %d\n",a, b, mcd(a, b));
    return 0;
}
