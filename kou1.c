#include<stdio.h>

struct kenkou{

  int no;
  char name[20];
  float sin;
  float tai;

};

int main(void){

  struct kenkou ninoni[3];
  int i;

  for(i = 0; i < 3; i ++){

    printf("\t-----%d回目-----\n", i + 1);
    printf("出席番号=>");
    scanf("%d", &ninoni[i].no);
    printf("名前=>");
    scanf("%s", ninoni[i].name);
    printf("身長=>");
    scanf("%f", &ninoni[i].sin);
    printf("体重=>");
    scanf("%f", &ninoni[i].tai);

  }

  printf("\t-----入力終了-----\n");

  for(i = 0; i < 3; i ++){

    printf("%d番", ninoni[i].no);
    printf("%sの", ninoni[i].name);
    printf("身長は%.1f、", ninoni[i].sin);
    printf("体重は%.1fkgです\n", ninoni[i].tai);

  }

  printf("終了します。\n");

  return 0;

}
