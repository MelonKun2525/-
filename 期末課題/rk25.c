#include<stdio.h>

int main(void){

  int in = 0, re = -999;

  for(; in != 999;){

    printf("���l����=>");
    scanf("%d", &in);
    re += in;

  }

  printf("���v��%d�ł��B\n", re);

  return 0;

}
