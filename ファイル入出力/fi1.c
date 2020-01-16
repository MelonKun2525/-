#include<stdio.h>
#include<stdlib.h>

int main(void){

  float sin, tai;
  char name[20];
  FILE *fp;

  if((fp = fopen("kd1.txt", "w")) == NULL){

    printf("ファイルがオープンできません。\n");
    exit(1);

  }

  printf("名前　　身長　体重\n");

  while(scanf("%s %f %f", name, &sin, &tai) != EOF)
    fprintf(fp, "%s %.1f %.1f", name, sin, tai);

  fclose(fp);
  printf("終了します。\n");
  return 0;

}
