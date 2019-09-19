#include<stdio.h>

float judge(float, float);

void main(void){

  float a, b, min;

  printf("一つ目入力=>");
  scanf("%f", &a);
  printf("二つ目入力=>");
  scanf("%f", &b);

  min = judge(a, b);

  printf("小さいのは %.1f です。\n", min);

}

float judge(float x, float y){

  if(x > y)
    return y;

  else
    return x;

}
