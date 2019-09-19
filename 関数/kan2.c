#include<stdio.h>

int new2(void);

void main(void){

  int i, hai[4];

  printf("入力\n");

  for(i = 0; i < 4; i ++){

    printf("%dつ目=", i + 1);
    hai[i] = new2();

  }

  printf("結果\n");

  for(i = 0; i < 4; i ++)
    printf("hai[%d]=%d\n", i, hai[i]);

}

int new2(void){

  int input;

  scanf("%d", &input);

  return input * 2;

}
