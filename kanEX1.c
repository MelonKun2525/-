#include<stdio.h>

int addition(int, int);
int multiplication(int, int);
void output(int);

void main(void){

  int a, b, method, result;

  printf("1��=>");
  scanf("%d", &a);
  printf("2��=>");
  scanf("%d", &b);
  printf("�v�Z���@�����(�|���Z:1, �����Z:2)=>");
  scanf("%d", &method);

  if(method == 1)
    output(multiplication(a, b));

  else if(method == 2)
    output(addition(a, b));

  else
    printf("1 �܂��� 2 ��I��ł��������B\n");

}

int addition(int x, int y){

  return x + y;

}

int multiplication(int x, int y){

  return x * y;

}

void output(int x){

  printf("���ʁy %d �z\n", x);

}
