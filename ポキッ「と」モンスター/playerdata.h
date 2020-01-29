#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static int IsLoaded = 0;

static struct pokimons{
  int id;
  char name[20];
  int lv;
  int atk;
  int def;
  int hp;
};

static struct players{
  int id;
  char name[20];
  struct pokimons pokimon[6];
}player;

int LoadPlayerData(int id){

  FILE *fp;
  int result;

  if((fp = fopen("players.txt", "r")) == NULL)
    return 1;

  do{

    result = fscanf(fp, "%5d%20s%5d%20s%5d%5d%5d%5d%5d%20s%5d%5d%5d%5d%5d%20s%5d%5d%5d%5d%5d%20s%5d%5d%5d%5d%5d%20s%5d%5d%5d%5d%5d%20s%5d%5d%5d%5d",
      &player.id, player.name,
      &player.pokimon[0].id, player.pokimon[0].name, &player.pokimon[0].lv, &player.pokimon[0].atk, &player.pokimon[0].def, &player.pokimon[0].hp,
      &player.pokimon[1].id, player.pokimon[1].name, &player.pokimon[1].lv, &player.pokimon[1].atk, &player.pokimon[1].def, &player.pokimon[1].hp,
      &player.pokimon[2].id, player.pokimon[2].name, &player.pokimon[2].lv, &player.pokimon[2].atk, &player.pokimon[2].def, &player.pokimon[2].hp,
      &player.pokimon[3].id, player.pokimon[3].name, &player.pokimon[3].lv, &player.pokimon[3].atk, &player.pokimon[3].def, &player.pokimon[3].hp,
      &player.pokimon[4].id, player.pokimon[4].name, &player.pokimon[4].lv, &player.pokimon[4].atk, &player.pokimon[4].def, &player.pokimon[4].hp,
      &player.pokimon[5].id, player.pokimon[5].name, &player.pokimon[5].lv, &player.pokimon[5].atk, &player.pokimon[5].def, &player.pokimon[5].hp
    );

    if(player.id == id){

      fclose(fp);
      IsLoaded = 1;
      return 0;

    }
  }while(result != EOF);

  fclose(fp);
  return 1;

}

int PrintPlayerData(void){

  int i;

  if(!IsLoaded)
    return 1;

  printf("名前: %s\n", player.name);
  printf("ID: %d\n", player.id);

  for(i = 0; i < 6; i ++){

    printf("ポキモン%d:\n", i + 1);
    printf("\tID: %d\n", player.pokimon[i].id);
    printf("\t名前: %s\n", player.pokimon[i].name);
    printf("\tレベル: %d\n", player.pokimon[i].lv);
    printf("\t攻撃力: %d\n", player.pokimon[i].atk);
    printf("\t防御力: %d\n", player.pokimon[i].def);
    printf("\t体力: %d\n", player.pokimon[i].hp);

  }

  return 0;

}

int SavePlayerData(void){

  int i;
  FILE *fp;

  if(!IsLoaded)
    return 1;

  // 途中・・・

}
