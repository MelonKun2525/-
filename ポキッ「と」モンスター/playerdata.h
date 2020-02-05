#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SUCCESS 0
#define FAILED -1

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
  int x;
  int y;
  struct pokimons pokimon[6];
}player;

/* プロトタイプ宣言 */
int CreatePlayerData(char*);
int GetPlayerId(void);
char GetPlayerName(void);
int GetPlayerX(void);
int GetPlayerY(void);
int GetPokimonId(int);
char GetPokimonName(int);
int GetPokimonLv(int);
int GetPokimonAtk(int);
int GetPokimonDef(int);
int GetPokimonHp(int);
int LoadPlayerData(int);
int PrintPlayerData(void);
int SavePlayerData(void);
int SetPlayerId(int);
int SetPlayerName(char*);
int SetPlayerX(int);
int SetPlayerY(int);
int SetPokimonId(int, int);
int SetPokimonName(int, char*);
int SetPokimonLv(int, int);
int SetPokimonAtk(int, int);
int SetPokimonDef(int, int);
int SetPokimonHp(int, int);
/* プロトタイプ宣言 */

int CreatePlayerData(char *name){

  int id, result, i = 0;
  char dummy[1], name2[20];
  FILE *fp;

  if((fp = fopen("players.txt", "r")) == NULL)
    return FAILED;

  while(1){

    fseek(fp, i * 272L, SEEK_SET);
    i++;
    result = fscanf(fp, "%5d%20s", &id, name2);

    if(result == EOF){

			id = -1;
    	break;

    }

    if(strcmp(name, name2) == 0)
    	return FAILED;

  }

  fclose(fp);

  player.id = id + 1;
  strcpy(player.name, name);
  player.x = 1;
  player.y = 1;

  for(i = 0; i < 6; i ++){

    player.pokimon[i].id = -1;
    strcpy(player.pokimon[i].name, "null");
    player.pokimon[i].lv = -1;
    player.pokimon[i].atk = -1;
    player.pokimon[i].def = -1;
    player.pokimon[i].hp = -1;

  }

  IsLoaded = 1;

  if(SavePlayerData() == FAILED)
    return FAILED;

  return SUCCESS;

}

int GetPlayerId(void){

  if(IsLoaded)
    return player.id;

  return FAILED;

}

char GetPlayerName(void){

  if(IsLoaded)
    return *player.name;

  return FAILED;

}

int GetPlayerX(void){

  if(IsLoaded)
    return player.x;

  return FAILED;

}

int GetPlayerY(void){

  if(IsLoaded)
    return player.y;

  return FAILED;

}

int GetPokimonId(int index){

  if(IsLoaded)
    if(index >= 0 && index <= 5)
      return player.pokimon[index].id;

  return FAILED;

}

char GetPokimonName(int index){

  if(IsLoaded)
    if(index >= 0 && index <= 5)
      return *player.pokimon[index].name;

  return FAILED;

}

int GetPokimonLv(int index){

  if(IsLoaded)
    if(index >= 0 && index <= 5)
      return player.pokimon[index].lv;

  return FAILED;

}

int GetPokimonAtk(int index){

  if(IsLoaded)
    if(index >= 0 && index <= 5)
      return player.pokimon[index].atk;

  return FAILED;

}

int GetPokimonDef(int index){

  if(IsLoaded)
    if(index >= 0 && index <= 5)
      return player.pokimon[index].def;

  return FAILED;

}

int GetPokimonHp(int index){

  if(IsLoaded)
    if(index >= 0 && index <= 5)
      return player.pokimon[index].hp;

  return FAILED;

}

int LoadPlayerData(int id){

  FILE *fp;

  if((fp = fopen("players.txt", "r")) == NULL)
    return FAILED;

  fseek(fp, id * 272L, SEEK_SET);

  if(fscanf(fp, "%5d%20s%5d%5d%5d%20s%5d%5d%5d%5d%5d%20s%5d%5d%5d%5d%5d%20s%5d%5d%5d%5d%5d%20s%5d%5d%5d%5d%5d%20s%5d%5d%5d%5d%5d%20s%5d%5d%5d%5d",
    &player.id, player.name, &player.x, &player.y,
    &player.pokimon[0].id, player.pokimon[0].name, &player.pokimon[0].lv, &player.pokimon[0].atk, &player.pokimon[0].def, &player.pokimon[0].hp,
    &player.pokimon[1].id, player.pokimon[1].name, &player.pokimon[1].lv, &player.pokimon[1].atk, &player.pokimon[1].def, &player.pokimon[1].hp,
    &player.pokimon[2].id, player.pokimon[2].name, &player.pokimon[2].lv, &player.pokimon[2].atk, &player.pokimon[2].def, &player.pokimon[2].hp,
    &player.pokimon[3].id, player.pokimon[3].name, &player.pokimon[3].lv, &player.pokimon[3].atk, &player.pokimon[3].def, &player.pokimon[3].hp,
    &player.pokimon[4].id, player.pokimon[4].name, &player.pokimon[4].lv, &player.pokimon[4].atk, &player.pokimon[4].def, &player.pokimon[4].hp,
    &player.pokimon[5].id, player.pokimon[5].name, &player.pokimon[5].lv, &player.pokimon[5].atk, &player.pokimon[5].def, &player.pokimon[5].hp
  ) != EOF){

    IsLoaded = 1;
    fclose(fp);
    return SUCCESS;

  }

  fclose(fp);
  return FAILED;

}

int PrintPlayerData(void){

  int i;

  if(!IsLoaded)
    return FAILED;

  printf("ID: %d\n", player.id);
  printf("名前: %s\n", player.name);
  printf("X座標: %d\n", player.x);
  printf("Y座標: %d\n", player.y);

  for(i = 0; i < 6; i ++){

    printf("ポキモン%d:\n", i + 1);
    printf("\tID: %d\n", player.pokimon[i].id);
    printf("\t名前: %s\n", player.pokimon[i].name);
    printf("\tレベル: %d\n", player.pokimon[i].lv);
    printf("\t攻撃力: %d\n", player.pokimon[i].atk);
    printf("\t防御力: %d\n", player.pokimon[i].def);
    printf("\t体力: %d\n", player.pokimon[i].hp);

  }

  return SUCCESS;

}

int SavePlayerData(void){

  int i;
  FILE *fp;

  if(!IsLoaded)
    return FAILED;

  if((fp = fopen("players.txt", "r+")) == NULL)
    return FAILED;

  fseek(fp, player.id * 272L, SEEK_SET);
  fprintf(fp, "%5d%20s%5d%5d", player.id, player.name, player.x, player.y);

  for(i = 0; i < 6; i++)
    fprintf(fp, "%5d%20s%5d%5d%5d%5d",
      player.pokimon[i].id,
      player.pokimon[i].name,
      player.pokimon[i].lv,
      player.pokimon[i].atk,
      player.pokimon[i].def,
      player.pokimon[i].hp
    );

  fclose(fp);
  return SUCCESS;

}

int SetPlayerId(int id){

  if(IsLoaded){

    player.id = id;
    return SUCCESS;

  }

  return FAILED;

}

int SetPlayerName(char *name){

  if(IsLoaded){

    strcpy(player.name, name);
    return SUCCESS;

  }

  return FAILED;

}

int SetPlayerX(int x){

  if(IsLoaded){

    player.x = x;
    return SUCCESS;

  }

  return FAILED;

}

int SetPlayerY(int y){

  if(IsLoaded){

    player.y = y;
    return SUCCESS;

  }

  return FAILED;

}

int SetPokimonId(int index, int id){

  if(IsLoaded){

    if(index >= 0 && index <= 5){

      player.pokimon[index].id = id;
      return SUCCESS;

    }
  }

  return FAILED;

}

int SetPokimonName(int index, char *name){

  if(IsLoaded){

    if(index >= 0 && index <= 5){

      strcpy(player.pokimon[index].name, name);
      return SUCCESS;

    }
  }

  return FAILED;

}

int SetPokimonLv(int index, int lv){

  if(IsLoaded){

    if(index >= 0 && index <= 5){

      player.pokimon[index].lv = lv;
      return SUCCESS;

    }
  }

  return FAILED;

}

int SetPokimonAtk(int index, int atk){

  if(IsLoaded){

    if(index >= 0 && index <= 5){

      player.pokimon[index].atk = atk;
      return SUCCESS;

    }
  }

  return FAILED;

}

int SetPokimonDef(int index, int def){

  if(IsLoaded){

    if(index >= 0 && index <= 5){

      player.pokimon[index].def = def;
      return SUCCESS;

    }
  }

  return FAILED;

}

int SetPokimonHp(int index, int hp){

  if(IsLoaded){

    if(index >= 0 && index <= 5){

      player.pokimon[index].hp = hp;
      return SUCCESS;

    }
  }

  return FAILED;

}
