#include<stdio.h>

float judge(float, float);

void main(void){

  float a, b, min;

  printf("��ړ���=>");
  scanf("%f", &a);
  printf("��ړ���=>");
  scanf("%f", &b);

  min = judge(a, b);

  printf("�������̂� %.1f �ł��B\n", min);

}

float judge(float x, float y){

  if(x > y)
    return y;

  else
    return x;

}
