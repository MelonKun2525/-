#include<stdio.h>

int main(void){

  int i, j;

  for(i = 1; i <= 4; i++){

    for(j = 4 - i; j > 0; j--)
      printf("Å@");

    for(j = i; j > 0; j--)
      printf("Åñ");

    printf("\n");

  }

  return 0;

}
