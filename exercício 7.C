#include <stdio.h>

//Devemos criar um código que faça a sequência de fibonacci quantas vezes o usuário desejar.

int main(void) {
  int rep=0, fib=0, num1=0, num2=1;
  printf("Digite quantos números vão participar da sequência: \n");
  scanf("%d",&rep);
  for(int x = 0;x < rep; x++){
    fib = num1 + num2;
    num1 = num2;
    num2 = fib;
    printf("%d\n",fib);
  }
}
