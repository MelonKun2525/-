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

/* プロトタイプ宣言 */
int CreatePlayerData(char*);
int LoadPlayerData(int);
int PrintPlayerData(void);
int SavePlayerData(void);
/* プロトタイプ宣言 */

int CreatePlayerData(char *name){

  int id = 0, i;

  while(LoadPlayerData(id) == 0)
    id ++;

  player.id = id;
  strcpy(player.name, name);

  for(i = 0; i < 6; i ++){

    player.pokimon[i].id = -1;
    strcpy(player.pokimon[i].name, "null");
    player.pokimon[i].lv = -1;
    player.pokimon[i].atk = -1;
    player.pokimon[i].def = -1;
    player.pokimon[i].hp = -1;

  }

  IsLoaded = 1;
  SavePlayerData();
  return 0;

}

int LoadPlayerData(int id){

  FILE *fp;

  if((fp = fopen("players.txt", "r")) == NULL)
    return 1;

  fseek(fp, id * 264L, SEEK_SET);

  if(fscanf(fp, "%5d%20s%5d%20s%5d%5d%5d%5d%5d%20s%5d%5d%5d%5d%5d%20s%5d%5d%5d%5d%5d%20s%5d%5d%5d%5d%5d%20s%5d%5d%5d%5d%5d%20s%5d%5d%5d%5d",
    &player.id, player.name,
    &player.pokimon[0].id, player.pokimon[0].name, &player.pokimon[0].lv, &player.pokimon[0].atk, &player.pokimon[0].def, &player.pokimon[0].hp,
    &player.pokimon[1].id, player.pokimon[1].name, &player.pokimon[1].lv, &player.pokimon[1].atk, &player.pokimon[1].def, &player.pokimon[1].hp,
    &player.pokimon[2].id, player.pokimon[2].name, &player.pokimon[2].lv, &player.pokimon[2].atk, &player.pokimon[2].def, &player.pokimon[2].hp,
    &player.pokimon[3].id, player.pokimon[3].name, &player.pokimon[3].lv, &player.pokimon[3].atk, &player.pokimon[3].def, &player.pokimon[3].hp,
    &player.pokimon[4].id, player.pokimon[4].name, &player.pokimon[4].lv, &player.pokimon[4].atk, &player.pokimon[4].def, &player.pokimon[4].hp,
    &player.pokimon[5].id, player.pokimon[5].name, &player.pokimon[5].lv, &player.pokimon[5].atk, &player.pokimon[5].def, &player.pokimon[5].hp
  ) != EOF){

    IsLoaded = 1;
    fclose(fp);
    return 0;

  }

  fclose(fp);
  return 1;

}

int PrintPlayerData(void){

  int i;

  if(!IsLoaded)
    return 1;

  printf("ID: %d\n", player.id);
  printf("名前: %s\n", player.name);

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
  char data[256] = {'\0'}, tmp[256]= {'\0'};
  FILE *fp;

  if(!IsLoaded)
    return 1;

  if((fp = fopen("players.txt", "w")) == NULL)
    return 1;

  sprintf(data, "%5d%20s", player.id, player.name);

  for(i = 0; i < 6; i ++){

    sprintf(tmp, "%5d%20s%5d%5d%5d%5d",
      player.pokimon[i].id,
      player.pokimon[i].name,
      player.pokimon[i].lv,
      player.pokimon[i].atk,
      player.pokimon[i].def,
      player.pokimon[i].hp
    );
    strcat(data, tmp);

    if(i == 5)
      strcat(data, "\n");

  }

  fseek(fp, player.id * 264L, SEEK_SET);
  fwrite(data, 264L, 1, fp);
  fclose(fp);
  return 0;

}
