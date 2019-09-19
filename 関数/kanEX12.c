#include<stdio.h>

int addition(int, int);
int multiplication(int, int);
void output(int);
void judge(int, int, int);

void main(void){

  int a, b, method, result;

  printf("1つ目=>");
  scanf("%d", &a);
  printf("2つ目=>");
  scanf("%d", &b);
  printf("計算方法を入力(掛け算:1, 足し算:2)=>");
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

  printf("結果【 %d 】\n", x);

}

void judge(int x, int y, int z){

  if(z == 1)
    output(multiplication(x, y));

  else if(z == 2)
    output(addition(x, y));

  else
    printf("1 または 2 を選んでください。\n");

}
