#include<stdio.h>

void new2(int, int*); // ��1�����ɏ�����, ��2�����ɔz��̃A�h���X�B

void main(void){

  int i, hai[4], *p;

  p = hai;

  printf("����\n");

  for(i = 0; i < 4; i ++){

    new2(i + 1, p);
    p ++;

  }

  printf("����\n");

  for(i = 0; i < 4; i ++)
    printf("hai[%d]=%d\n", i, hai[i]);

}

void new2(int count, int *hai){

  int input;

  printf("%d��=", count);
  scanf("%d", &input);

  *hai = input * 2;

}
