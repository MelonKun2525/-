#include <stdio.h>
#include "Pokimon.h"

int main(void){

  int id, type, atk, def, hp, sp;
  char name[20];

  printf("ポキモンを登録します。\n");

  while(1){

    printf("IDを入力(終了は -1)\n");
    printf(">");
    scanf("%d", &id);

    if(id == -1)
      break;

    printf("名前を入力\n");
    printf(">");
    scanf("%s", name);

    do{

      printf("タイプを入力して下さい。(ほのお：0 みず：1 くさ：2)\n");
      printf(">");
      scanf("%d", &type);

    }while(type < 0 || type > 2);

    printf("攻撃力を入力して下さい。\n");
    printf(">");
    scanf("%d", &atk);

    printf("防御力を入力して下さい。\n");
    printf(">");
    scanf("%d", &def);

    printf("HPを入力して下さい。\n");
    printf(">");
    scanf("%d", &hp);

    printf("すばやさを入力して下さい。\n");
    printf(">");
    scanf("%d", &sp);

    if(CreatePokimon(id, name, type, atk, def, hp, sp) == -1){

      printf("ポキモンの作成中にエラーが発生しました。");
      return -1;

    }

    printf("\n\n\n----------\n\n\n");

  }

  return 0;

}
