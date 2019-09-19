#include<stdio.h>

void main(void){

  int get, d, a[10] = {22, 60, 5, 87, 65, 0, 56, 12, 3, 76}, *p;

  p = a;

  while(1){

    do{

      printf("1～10の数値を入力=>");
      scanf("%d", &get);

    }while(get < 1 || get > 10);

    p = p + (get - 1);
    d = *p;

    printf("dの値は、%d です。\n", d);

    p = p - (get - 1);

  }
}
