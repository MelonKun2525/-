#include<stdio.h>

int main(void){

  int in, sum = 0, *p;

  p = &sum;

  printf("加算開始します\n");

  while(1){

    printf("1・2・3・4・5の数値を入力　0で終了\n");
    printf(">");
    scanf("%d", &in);

    switch(in){

      case 0:

        printf("最終結果は%dです\n", *p);

        return 0;

      case 1:
      case 2:
      case 3:
      case 4:
      case 5:

        *p = *p + in;
        printf("%dを加算しました\n", in);

        break;

      default:

        printf("1～5 または 0 の数値を入力してください\n");

    }
  }
}
