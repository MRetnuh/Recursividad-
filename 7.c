#include<stdio.h>
int catalan(int n) {
  if(n == 0) return 1;
    int r = 0;
    for(int i = 0; i < n +1; i++){
      r += catalan(i) * catalan(n - i - 1);
    }
    return r;
  }
int main(int argc, char *argv[]){
for(int i = 0; i < 12; i++)
  printf("%d ", catalan(i));
printf("\n");
return 0;
}
