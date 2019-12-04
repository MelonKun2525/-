#include<stdio.h>

void adren(int*);

int main(void){

  int i, test[5];

  adren(test);

  for(i = 0; i < 5; i++)
    printf("adren[%d]=%d\n", i, test[i]);

  return 0;

}

void adren(int *p){

  int i;

  for(i = 0; i < 5; i++){

    printf("[%d/5]入力=>", i+1);
    scanf("%d", p);
    p++;

  }
}
