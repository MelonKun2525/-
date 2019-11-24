#include<stdio.h>

int main(void){

  int in = 0, re = -999;

  for(; in != 999;){

    printf("数値入力=>");
    scanf("%d", &in);
    re += in;

  }

  printf("合計は%dです。\n", re);

  return 0;

}
