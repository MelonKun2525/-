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

    printf("\t-----%d���-----\n", i + 1);
    printf("�o�Ȕԍ�=>");
    scanf("%d", &p->no);
    printf("���O=>");
    scanf("%s", p->name);
    printf("�g��=>");
    scanf("%f", &p->sin);
    printf("�̏d=>");
    scanf("%f", &p->tai);

    p++;

  }

  printf("\t-----���͏I��-----\n");

  for(i = 3; i > 0; i--){

    printf("%d��", (p - i)->no);
    printf("%s��", (p - i)->name);
    printf("�g����%.1f�A", (p - i)->sin);
    printf("�̏d��%.1fkg�ł�\n", (p - i)->tai);

  }

  printf("�I�����܂��B\n");

  return 0;

}
