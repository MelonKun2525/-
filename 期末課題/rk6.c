#include<stdio.h>

int addition(int, int);
int roup(int);

int main(void){

  int re = -999;

  re = roup(re);

  printf("合計は%dです。\n", re);

  return 0;

}

int addition(int in, int re){

  return re + in;

}

int roup(int re){

  int in;

  do{

    printf("数値入力=>");
    scanf("%d", &in);

    re = addition(in, re);

  }while(in != 999);

  return re;

}
