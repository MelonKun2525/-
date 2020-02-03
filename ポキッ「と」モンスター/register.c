#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

  int atk, def, hp;
  char name[20], type[20];
  FILE *fp;

  if((fp = fopen("Pokimons.txt", "a")) == NULL){

    printf("ファイルを開くことができませんでした。\n");
    exit(1);

  }

  fseek(fp, 54L, SEEK_SET);
  printf("ポキモンを登録します。\n");

  while(1){

    printf("登録するポキモンの名前を入力(終了は\"exit\")\n");
    printf(">");
    scanf("%s", name);

    if(strcmp(name, "exit") == 0)
      break;

    printf("タイプを入力して下さい。(ほのお・みず・くさ)\n");
    printf(">");
    scanf("%s", type);

    printf("攻撃力を入力して下さい。\n");
    printf(">");
    scanf("%d", &atk);

    printf("防御力を入力して下さい。\n");
    printf(">");
    scanf("%d", &def);

    printf("HPを入力して下さい。\n");
    printf(">");
    scanf("%d", &hp);

    fprintf(fp, "%20s%20s%5d%5d%5d\n", name, type, atk, def, hp);

    printf("\n\n\n----------\n\n\n");

  }

  fclose(fp);

  return 0;

}
