#include <stdio.h>
#include "Pokimon.h"

int main(void){

  int id, type, atk, def, hp, sp;
  char name[20];

  printf("�|�L������o�^���܂��B\n");

  while(1){

    printf("ID�����(�I���� -1)\n");
    printf(">");
    scanf("%d", &id);

    if(id == -1)
      break;

    printf("���O�����\n");
    printf(">");
    scanf("%s", name);

    do{

      printf("�^�C�v����͂��ĉ������B(�ق̂��F0 �݂��F1 �����F2)\n");
      printf(">");
      scanf("%d", &type);

    }while(type < 0 || type > 2);

    printf("�U���͂���͂��ĉ������B\n");
    printf(">");
    scanf("%d", &atk);

    printf("�h��͂���͂��ĉ������B\n");
    printf(">");
    scanf("%d", &def);

    printf("HP����͂��ĉ������B\n");
    printf(">");
    scanf("%d", &hp);

    printf("���΂₳����͂��ĉ������B\n");
    printf(">");
    scanf("%d", &sp);

    if(CreatePokimon(id, name, type, atk, def, hp, sp) == -1){

      printf("�|�L�����̍쐬���ɃG���[���������܂����B");
      return -1;

    }

    printf("\n\n\n----------\n\n\n");

  }

  return 0;

}
