#include<stdio.h>

int main(void){

  int in, re = 0; //"in"は入力用、"re"は合計を格納する用。

  while(1){ //"rk2"は"rk1"とそんなに変わんないから特に説明ないよ。

    printf("数値入力=>");
    scanf("%d", &in);

    if(in == 999)
      break;

    re += in;

  }

  printf("合計は%dです。\n", re);
  return 0;

}
