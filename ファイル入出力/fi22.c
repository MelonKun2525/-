#include<stdio.h>
#include<stdlib.h>

int main(void){

  FILE *fp1;
  char name[10];
  int eng, math, i = 0;

  if((fp1 = fopen("firen.txt", "r")) == NULL){

    printf("ファイルがオープンできませんでした。\n");
    exit(1);

  }

  printf("何番目のデータを出力しますか？\n");
  scanf("%d", &i);

  fseek(fp1, i * 20L, SEEK_SET);
  fscanf(fp1, "%10s%5d%5d", name, &eng, &math);
  printf("      名前 英語 数学\n");
  printf("%10s%5d%5d\n", name, eng, math);

  fclose(fp1);
  printf("終了します。\n");
  return 0;

}
