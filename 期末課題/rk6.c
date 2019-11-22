#include<stdio.h>

int addition(int, int);
int roup(int);

int main(void){

  int re = -999;

  re = roup(re);

  printf("‡Œv‚Í%d‚Å‚·B\n", re);

  return 0;

}

int addition(int in, int re){

  return re + in;

}

int roup(int re){

  int in;

  do{

    printf("”’l“ü—Í=>");
    scanf("%d", &in);

    re = addition(in, re);

  }while(in != 999);

  return re;

}
