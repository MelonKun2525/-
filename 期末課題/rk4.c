#include<stdio.h>

int main(void){

  int in, re = -999, *pe;

  pe = &re;

  do{

    printf("���l����=>");
    scanf("%d", &in);

    *pe = *pe + in;

  }while(in != 999);

  printf("���v��%d�ł��B\n", *pe);

  return 0;

}
