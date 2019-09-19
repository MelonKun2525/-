#include<stdio.h>

int addition(int, int);
int multiplication(int, int);
void output(int);

void main(void){

  int a, b, method, result;

  printf("1つ目=>");
  scanf("%d", &a);
  printf("2つ目=>");
  scanf("%d", &b);
  printf("計算方法を入力(掛け算:1, 足し算:2)=>");
  scanf("%d", &method);

  if(method == 1)
    output(multiplication(a, b));

  else if(method == 2)
    output(addition(a, b));

  else
    printf("1 または 2 を選んでください。\n");

}

int addition(int x, int y){

  return x + y;

}

int multiplication(int x, int y){

  return x * y;

}

void output(int x){

  printf("結果【 %d 】\n", x);

}
