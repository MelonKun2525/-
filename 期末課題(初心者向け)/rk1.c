#include<stdio.h>

int main(void){

  int in, sum = 0; //"in"は入力用、"sum"は合計を格納する用。

  printf("加算開始します\n");

  while(1){ //無限ループ

    printf("1・2・3・4・5の数値を入力　0で終了\n");
    printf(">");
    scanf("%d", &in);

    if(in == 0) //0が入力されたとき、whileのループから抜ける処理。
      break; //forやwhile文の中に"break"を入れると、強制的にループから脱出できる。

    switch(in){

      case 1: //複数のcaseを重ねることによって、"または"という判断ができる。
      case 2: //今回の場合は、"1 または2 または3 または4 または5"
      case 3:
      case 4:
      case 5:

        sum += in; //sum = sum + in; の略
        printf("%dを加算しました\n", in);

        break;

      default: //上記のcase以外の場合。 今回は1～5以外の数字が入力されたとき。

        printf("1～5 または 0 の数値を入力してください\n");

    }
  }

  printf("最終結果は%dです\n", sum); //0が入力され、ループから抜けた際に"sum"の出力を行う。

  return 0;

}
