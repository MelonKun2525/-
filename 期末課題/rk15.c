#include<stdio.h>

int main(void){

  int in, sum = 0;

  printf("加算開始します\n");

  while(1){

    printf("1・2・3・4・5の数値を入力　0で終了\n");
    printf(">");
    scanf("%d", &in);

    if(in == 0){

      printf("最終結果は%dです\n", sum);

      return 0;

    }else if(in >= 1 && in <= 5){

      sum += in;
      printf("%dを加算しました\n", in);

    }else{

      printf("1～5 または 0 の数値を入力してください\n");

    }
  }
}
