#include<stdio.h>

void judge(int*, int*, int*);

int main(void){

  int a, b, max;

  printf("一つ目入力=>");
  scanf("%d", &a);
  printf("二つ目入力=>");
  scanf("%d", &b);

  judge(&a, &b, &max);

  printf("入力終了\n");
  printf("大きいのは%dです。\n", max);
  printf("終了します。\n");

  return 0;

}

void judge(int *p1, int *p2, int *p3){

  if(*p1 > *p2)
    *p3 = *p1;

  else
    *p3 = *p2;

}
