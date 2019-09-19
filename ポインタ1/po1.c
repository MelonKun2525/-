#include<stdio.h>

void main(void){

  int get, d, a[10] = {22, 60, 5, 87, 65, 0, 56, 12, 3, 76}, *p;

  p = a;

  printf("1～10の数値を入力=>");
  scanf("%d", &get);

  p = p + (get - 1);
  d = *p;

  printf("dの値は、%d です。\n", d);
  printf("終了します。\n");

}
