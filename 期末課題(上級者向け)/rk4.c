#include<stdio.h>

int main(void){

  int in = 0, re = 0, *pe;

  pe = &re;

  while(in != 999){

    *pe = *pe + in;

    printf("数値入力=>");
    scanf("%d", &in);

  }

  printf("合計は%dです。\n", *pe);

  return 0;

}
