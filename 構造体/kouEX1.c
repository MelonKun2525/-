#include<stdio.h>

struct kenkou{

  int no;
  char name[20];
  float sin;
  float tai;

};

int main(void){

  struct kenkou ninoni[3], *p;
  int i;

  p = ninoni;

  for(i = 0; i < 3; i++){

    printf("\t-----%d回目-----\n", i + 1);
    printf("出席番号=>");
    scanf("%d", &p->no);
    printf("名前=>");
    scanf("%s", p->name);
    printf("身長=>");
    scanf("%f", &p->sin);
    printf("体重=>");
    scanf("%f", &p->tai);

    p++;

  }

  printf("\t-----入力終了-----\n");

  for(i = 3; i > 0; i--){

    printf("%d番", (p - i)->no);
    printf("%sの", (p - i)->name);
    printf("身長は%.1f、", (p - i)->sin);
    printf("体重は%.1fkgです\n", (p - i)->tai);

  }

  printf("終了します。\n");

  return 0;

}
