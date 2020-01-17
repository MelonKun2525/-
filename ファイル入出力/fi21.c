#include<stdio.h>
#include<stdlib.h>

int main(void){

  FILE *fp1;
  char name[10];
  int eng, math, i = 0;

  if((fp1 = fopen("firen.txt", "w")) == NULL){

    printf("ファイルがオープンできません。\n");
    exit(1);

  }

  printf("データを入力してください。\n終了は,CTRL+Z\n");
  printf("名前　英語　数学\n");

  while(scanf("%s %d %d", name, &eng, &math) != EOF){

    fseek(fp1, i * 20L, SEEK_SET);
    fprintf(fp1, "%10s%5d%5d", name, eng, math);
    i++;

  }

  fclose(fp1);
  printf("終了します。\n");
  return 0;

}
