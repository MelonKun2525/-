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
    {1, "�s�J�`���E", 100, 67, 60},
    {2, "���M�A", 250, 120, 101},
    {3, "�G���t�[��", 89, 60, 50},
    {4, "�z�G���I�[", 358, 123, 45}
  }, *p;
  int in;

  p = nakama;

  printf("�ԍ������=>");
  scanf("%d", &in);

  if(in >= 1 && in <= 4){

    printf("���O:%s ", (p + in - 1)->name);
    printf("HP:%d ", (p + in - 1)->hp);
    printf("ATK:%d ", (p + in - 1)->atk);
    printf("DEF:%d\n", (p + in - 1)->def);

  }else{

    printf("���̔ԍ��͑��݂��܂���B\n");

  }

  printf("�I�����܂��B\n");
  return 0;

}
