#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

  int atk, def, hp;
  char name[20], type[20];
  FILE *fp;

  if((fp = fopen("Pokimons.txt", "a")) == NULL){

    printf("�t�@�C�����J�����Ƃ��ł��܂���ł����B\n");
    exit(1);

  }

  fseek(fp, 54L, SEEK_SET);
  printf("�|�L������o�^���܂��B\n");

  while(1){

    printf("�o�^����|�L�����̖��O�����(�I����\"exit\")\n");
    printf(">");
    scanf("%s", name);

    if(strcmp(name, "exit") == 0)
      break;

    printf("�^�C�v����͂��ĉ������B(�ق̂��E�݂��E����)\n");
    printf(">");
    scanf("%s", type);

    printf("�U���͂���͂��ĉ������B\n");
    printf(">");
    scanf("%d", &atk);

    printf("�h��͂���͂��ĉ������B\n");
    printf(">");
    scanf("%d", &def);

    printf("HP����͂��ĉ������B\n");
    printf(">");
    scanf("%d", &hp);

    fprintf(fp, "%20s%20s%5d%5d%5d\n", name, type, atk, def, hp);

    printf("\n\n\n----------\n\n\n");

  }

  fclose(fp);

  return 0;

}
