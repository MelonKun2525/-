#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

int x = 1, y = 1; //プレイヤー座標
char map[25][101];
FILE *map1;

int key(void);
int playerMove(int, int);

int main(void){

  int i, j, chr, result = 0; //システムに関する変数

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

    printf("\n\n\n\t\t\t\tO:プレイヤー S:スタート G:ゴール ESC:終了\n");

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

      playerMove(0, -1);

      break;

    case 80:

      playerMove(0, 1);

      break;

    case 77:

      playerMove(1, 0);

      break;

    case 75:

      playerMove(-1, 0);

      break;

  }

  return 0;

}

int playerMove(int changeX, int changeY){

  switch(map[y + changeY][x + changeX]){

    case '=':
    case '|':

      return 1;

    case 'G':

      system("cls");
      printf("\n\n\n\n\n\t\t\t\t\t\tゴール！！\n");
      getch();
      system("cls");
      exit(0);

  }

  x += changeX;
  y += changeY;

  return 0;

}
