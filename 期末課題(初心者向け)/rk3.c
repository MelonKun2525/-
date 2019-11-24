#include<stdio.h>

int main(void){

  int in, sum = 0, *p; //"in"は入力用、"sum"は合計を格納する用、"*p"はポインタ用。

  p = &sum; //"sum"との関連付け これ以降は"*p"で"sum"の代用ができる。

  /* ↓↓↓↓↓ これより下は"sum"を"*p"に変えただけ。↓↓↓↓↓ */

  printf("加算開始します\n");

  while(1){

    printf("1・2・3・4・5の数値を入力　0で終了\n");
    printf(">");
    scanf("%d", &in);

    if(in == 0)
      break;

    switch(in){

      case 1:
      case 2:
      case 3:
      case 4:
      case 5:

        *p = *p + in; //ポインタ変数は省略ができないと聞いたことがあるかも。
        printf("%dを加算しました\n", in);

        break;

      default:

        printf("1～5 または 0 の数値を入力してください\n");

    }
  }

  printf("最終結果は%dです\n", *p);
  return 0;

}
