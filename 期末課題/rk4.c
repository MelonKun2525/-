#include<stdio.h>

int main(void){

  int in, re = -999, *pe;

  pe = &re;

  do{

    printf("数値入力=>");
    scanf("%d", &in);

    *pe = *pe + in;

  }while(in != 999);

  printf("合計は%dです。\n", *pe);

  return 0;

}
