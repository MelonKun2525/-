#include<stdio.h>

struct region{

  char *prefecture;
  int area;
  int population;

}data[] = {
  {"北海道", 78420, 554},
  {"東京都", 2188, 1290},
  {"京都府", 4613, 264},
  {"沖縄県", 2275, 138}
};

void output(struct region *pdt);

int main(void){

  output(data);
  return 0;

}

void output(struct region *pdt){

  int i;

  printf("都道府県　面積(km2)　人口(万人)\n");

  for(i = 0, pdt = data; i < 4; i++, pdt++){

    printf(" %s ", pdt->prefecture);
    printf("%8d ", pdt->area);
    printf("%9d\n", pdt->population);

  }
}
