#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

int x = 1, y = 1; //プレイヤー座標
int key(void);

int main(void){

  int i, j, chr, result = 0; //システムに関する変数
  char map[25][102];
  FILE *map1;

  if((map1 = fopen("Map1.txt", "r")) == NULL){

    printf("【エラー: マップファイルが読み込めませんでした。】");
    return 1;

  }

  for(i = 0; i < 25; i ++){

    fgets(map[i], 102, map1);

  }

  while(result != 1){

    system("cls");

    for(i = 0; i < 25; i ++){

      for(j = 0; j < 100; j ++){

        if(i == y && j == x)
          printf("O");

        else
          printf("%c", map[i][j]);

      }
    }

    result = key();

  }



  fclose(map1);

  return 0;

}

int key(void){

  int in;

  in = getch();

  if(in == 27)
    return 1;

  if(in != 0)
    return 0;

  in = getch();

  switch(in){

    case 72:

      y -= 1;

      break;

    case 80:

      y += 1;

      break;

    case 77:

      x += 1;

      break;

    case 75:

      x -= 1;

      break;

  }

  return 0;

}
