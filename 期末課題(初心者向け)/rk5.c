#include<stdio.h>

int sub(void); //関数"sub"のプロトタイプ宣言。

int main(void){

  int sum; //合計を格納する用。

  printf("加算開始します\n");

  sum = sub(); //関数"sub"を呼び出し、returnされたものを"sum"に入れる。
               //ちなみに関数を呼び出した場合、呼び出した関数が終了するまで呼び出し元の処理がストップする。

  printf("最終結果は%dです\n", sum);
  return 0;

}

int sub(void){ //この関数の 引数は無し、返り値はint型。

  int in, sum = 0; //"in"は入力用、"sum"は合計を格納する用。
                  //ここで注意だが、今回の変数はstatic型(静的変数)じゃないので、mainの"sum"とは名前が同じだが、全くの別物である。

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

        sum += in;
        printf("%dを加算しました\n", in);

        break;

      default:

        printf("1～5 または 0 の数値を入力してください\n");

    }
  }

  return sum; //関数"sub"の変数"sum"をmain関数に返す。今回の場合は、main関数の"sum"に値が入る。

}
