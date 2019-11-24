#include<stdio.h>

int main(void){

  int in, re = -999;

  do{

    printf("数値入力=>");
    scanf("%d", &in);

    re += in;

  }while(in != 999);

  printf("合計は%dです。\n", re);

  return 0;

}
