#include<stdio.h>

int sub(void);

int main(void){

  int sum;

  printf("加算開始します\n");

  sum = sub();

  printf("最終結果は%dです\n", sum);

  return 0;

}

int sub(void){

  int in, sum = 0;

  while(1){

    printf("1・2・3・4・5の数値を入力　0で終了\n");
    printf(">");
    scanf("%d", &in);

    switch(in){

      case 0:

        return sum;

      case 1:
      case 2:
      case 3:
      case 4:
      case 5:

        sum += in;
        printf("%dを加算しました\n", in);

        break;

      default:

        printf("1～5 または 0 の数値を入力してください\n");

    }
  }
}
