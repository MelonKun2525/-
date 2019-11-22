#include<stdio.h>

int main(void){

  int in, re = -999, *pe;

  pe = &re;

  do{

    printf("”’l“ü—Í=>");
    scanf("%d", &in);

    *pe = *pe + in;

  }while(in != 999);

  printf("‡Œv‚Í%d‚Å‚·B\n", *pe);

  return 0;

}
