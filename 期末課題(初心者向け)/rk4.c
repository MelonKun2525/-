#include<stdio.h>

int main(void){

  int in, re = 0, *pe; //"in"は入力用、"re"は合計を格納する用、"*pe"はポインタ用。

  pe = &re;

  /* ↓↓↓↓↓ "rk3"とやること変わりません。↓↓↓↓↓ */

  while(1){

    printf("数値入力=>");
    scanf("%d", &in);

    if(in == 999)
      break;

    *pe = *pe + in;

  }

  printf("合計は%dです。\n", *pe);
  return 0;

}
