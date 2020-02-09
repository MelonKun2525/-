#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct status{

  int id;
  char name[20];
  int type;
  int atk;
  int def;
  int hp;
  int sp;

}pokimon;

int CreatePokimon(int id, char *name, int type, int atk, int def, int hp, int sp){

  int i = 0, result;
  char find_name[20];
  FILE *fp;

  if((fp = fopen("Pokimons.txt", "w+")) == NULL)
    return -1;

  while(1){

    fseek(fp, i * 46L, SEEK_SET);
    if(fscanf(fp, "%*5d%20s", find_name) == EOF)
      break;

    if(strcmp(find_name, name) == 0)
      return -1;

    i++;

  }

  fprintf(fp, "%5d%20s%5d%5d%5d%5d%5d", id, name, type, atk, def, hp, sp);
  fclose(fp);
  return 0;

}
