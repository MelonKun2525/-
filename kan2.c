#include<stdio.h>

void new2(int, int*); // 第1引数に処理回数, 第2引数に配列のアドレス。

void main(void){

  int i, hai[4], *p;

  p = hai;

  printf("入力\n");

  for(i = 0; i < 4; i ++){

    new2(i + 1, p);
    p ++;

  }

  printf("結果\n");

  for(i = 0; i < 4; i ++)
    printf("hai[%d]=%d\n", i, hai[i]);

}

void new2(int count, int *hai){

  int input;

  printf("%dつ目=", count);
  scanf("%d", &input);

  *hai = input * 2;

}
