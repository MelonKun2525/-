#include<stdio.h>

int addition(int, int);
int multiplication(int, int);
void output(int);

void main(void){

  int a, b, method, result;

  printf("1‚Â–Ú=>");
  scanf("%d", &a);
  printf("2‚Â–Ú=>");
  scanf("%d", &b);
  printf("ŒvZ•û–@‚ğ“ü—Í(Š|‚¯Z:1, ‘«‚µZ:2)=>");
  scanf("%d", &method);

  if(method == 1)
    output(multiplication(a, b));

  else if(method == 2)
    output(addition(a, b));

  else
    printf("1 ‚Ü‚½‚Í 2 ‚ğ‘I‚ñ‚Å‚­‚¾‚³‚¢B\n");

}

int addition(int x, int y){

  return x + y;

}

int multiplication(int x, int y){

  return x * y;

}

void output(int x){

  printf("Œ‹‰Êy %d z\n", x);

}
