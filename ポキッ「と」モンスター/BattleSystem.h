#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//#include "playerdata.h"

//エンカウントするまでの基準歩数
#define STEPS 10

/* プロトタイプ宣言 */
int Encount(void);
int BattleFadeOut(void);
int BattleFadeIn(void);
/* プロトタイプ宣言 */

// 確率が外れるごとに数値が増えてあたりやすくする。
static float enc_lv = 0.0;

// 確率 = 0~99の乱数生成 ÷ (基準歩数 + エンカウントレベル)
int Encount(void){

  int prob;

  srand((unsigned) time(NULL));
  prob = (rand() % 100) / (STEPS + enc_lv);

  if(prob == 0){

    enc_lv = 0;
    return 1;

  }else{

    enc_lv += 0.5;
    return 0;

  }
}

int BattleFadeIn(void){

  int i, j, k;
  char effect1[25][101], effect2[25][101];
  FILE *fp;

  if((fp = fopen("BattleUI.txt", "r")) == NULL)
    return -1;

  for(i = 0; i < 25; i++)
    for(j = 0; j < 101; j++)
      effect2[i][j] = ' ';

  system("cls");

  for(i = 0; i < 25; i++)
    fgets(effect1[i], 101, fp);

  for(i = 0; i < 13; i++){

    strcpy(effect2[12 - i], effect1[12 - i]);
    strcpy(effect2[13 + i], effect1[13 + i]);
    system("cls");

    for(k = 0; k < 25; k++)
      printf("%s", effect2[k]);

    Sleep(10);

  }

  exit(0);

}

int BattleFadeOut(void){

  int i, j, k;
  FILE *fp;
  char effect1[25][101];

  if((fp = fopen("Bikkuri.txt", "r")) == NULL)
    return -1;

  for(i = 0; i < 25; i++)
    fgets(effect1[i], 101, fp);

  system("cls");

  for(i = 0; i < 25; i++)
    printf("%s", effect1[i]);

  Sleep(1000);
  system("cls");

  for(i = 0; i < 25; i++){

    for(j = 0; j < 99; j++){

      effect1[i][j] = ' ';
      effect1[24 - i][j] = ' ';

    }

    for(k = 0; k < 25; k++)
      printf("%s", effect1[k]);

    Sleep(10);
    system("cls");

  }

  return 0;

}
