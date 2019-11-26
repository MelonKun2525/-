#include<stdio.h>

struct pokemon{

  int no;
  char name[20];
  int hp;
  int atk;
  int def;

};

int main(void){

  struct pokemon nakama[4] = {
    {1, "ピカチュウ", 100, 67, 60},
    {2, "ルギア", 250, 120, 101},
    {3, "エルフーン", 89, 60, 50},
    {4, "ホエルオー", 358, 123, 45}
  };
  int in;

  printf("番号を入力=>");
  scanf("%d", &in);

  if(in >= 1 && in <= 4){

    printf("名前:%s ", nakama[in - 1].name);
    printf("HP:%d ", nakama[in - 1].hp);
    printf("ATK:%d ", nakama[in - 1].atk);
    printf("DEF:%d\n", nakama[in - 1].def);

  }else{

    printf("その番号は存在しません。\n");

  }

  printf("終了します。\n");

  return 0;

}
