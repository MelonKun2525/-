#include<stdio.h>

int main(void){

  int in, re = -999;

  do{

    printf("���l����=>");
    scanf("%d", &in);

    re += in;

  }while(in != 999);

  printf("���v��%d�ł��B\n", re);

  return 0;

}
