#include<stdio.h>

int main(void){

  int in = 0, re = 0;

  while(in != 999){

    re += in;

    printf("数値入力=>");
    scanf("%d", &in);

  }

  printf("合計は%dです。\n", re);

  return 0;

}
