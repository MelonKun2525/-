#include<stdio.h>

void baibai(int*);

int main(void){

  int i, hai[4];

  baibai(hai);
  printf("結果\n");

  for(i=0; i<4; i++)
    printf("hai[%d]=%d\n", i, hai[i]);

  printf("終了します。\n");
  return 0;

}

void baibai(int *p){

  int i;

  for(i=0; i<4; i++){

    printf("%dつ目入力=>", i+1);
    scanf("%d", p);
    *p=*p*2;
    p++;

  }
}
