#include<stdio.h>

int main(void){

  int in, re = 0; //"in"は入力用、"re"は合計を格納する用。

  for(;;){ //forの中をセミコロンを2つだけにしとくと無限ループができる。

    printf("数値入力=>");
    scanf("%d", &in);

    if(in == 999)
      break;

    re += in;

  }

  printf("合計は%dです。\n", re);
  return 0;

}
