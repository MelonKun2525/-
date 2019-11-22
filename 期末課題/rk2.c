#include<stdio.h>

int main(void){

  int in, re = -999;

  do{

    printf("”’l“ü—Í=>");
    scanf("%d", &in);

    re += in;

  }while(in != 999);

  printf("‡Œv‚Í%d‚Å‚·B\n", re);

  return 0;

}
