#include<stdio.h>

void roup(int*);
void input(int*);
void twice(int*);

int main(void){

  int i, hai[4];

  roup(hai);

  for(i=0; i<4; i++)
    printf("hai[%d]=%d\n", i, hai[i]);

  printf("終了します。\n");
  return 0;

}

void roup(int *p){

  int i;

  for(i=0; i<4; i++){

    printf("%dつ目入力=>", i+1);
    input(p+i);
    twice(p+i);

  }
}

void input(int *p){

  scanf("%d", p);

}

void twice(int *p){

  *p = *p * 2;

}
