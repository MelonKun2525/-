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

    printf("\t-----%d���-----\n", i + 1);
    printf("�o�Ȕԍ�=>");
    scanf("%d", &ninoni[i].no);
    printf("���O=>");
    scanf("%s", ninoni[i].name);
    printf("�g��=>");
    scanf("%f", &ninoni[i].sin);
    printf("�̏d=>");
    scanf("%f", &ninoni[i].tai);

  }

  printf("\t-----���͏I��-----\n");

  for(i = 0; i < 3; i ++){

    printf("%d��", ninoni[i].no);
    printf("%s��", ninoni[i].name);
    printf("�g����%.1f�A", ninoni[i].sin);
    printf("�̏d��%.1fkg�ł�\n", ninoni[i].tai);

  }

  printf("�I�����܂��B\n");

  return 0;

}
