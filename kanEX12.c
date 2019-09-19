#include<stdio.h>

int addition(int, int);
int multiplication(int, int);
void output(int);
void judge(int, int, int);

void main(void){

  int a, b, method, result;

  printf("1‚Â–Ú=>");
  scanf("%d", &a);
  printf("2‚Â–Ú=>");
  scanf("%d", &b);
  printf("ŒvZ•û–@‚ğ“ü—Í(Š|‚¯Z:1, ‘«‚µZ:2)=>");
  scanf("%d", &method);
  judge(a, b, method);

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

void judge(int x, int y, int z){

  if(z == 1)
    output(multiplication(x, y));

  else if(z == 2)
    output(addition(x, y));

  else
    printf("1 ‚Ü‚½‚Í 2 ‚ğ‘I‚ñ‚Å‚­‚¾‚³‚¢B\n");

}
