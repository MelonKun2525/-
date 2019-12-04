#include<stdio.h>

int addition(int, int);
int roup(int);

int main(void){

  int re = 0;

  re = roup(re);

  printf("合計は%dです。\n", re);

  return 0;

}

int addition(int in, int re){

  return re + in;

}

int roup(int re){

  int in = 0;

  while(in != 999){

    re = addition(in, re);

    printf("数値入力=>");
    scanf("%d", &in);

  }

  return re;

}
