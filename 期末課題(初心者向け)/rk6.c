#include<stdio.h>

int addition(int, int); //関数"addition"のプロトタイプ宣言。
int roup(int); //関数"roup"のプロトタイプ宣言。

int main(void){

  int re = 0; //合計を格納する用。

  re = roup(re); //関数"roup"を呼び出し、returnされたものを"re"に入れる。

  printf("合計は%dです。\n", re);
  return 0;

}

// 変数"in"には足したい数を入力させる。"re"には今まで合計してきた値を入力させる。
int addition(int in, int re){ //この関数の 引数はint型2つ、返り値もint型。

  //"rk5"で説明した通り、関数"addition"の変数は名前が同じでもmain関数とroup関数の変数とは別物だからね。

  re += in; //"in"と"re"を足したものを"re"に入れる。
  return re; //"re"の値を呼び出し元(今回はroup関数)に返す。

}

//"re"には合計を格納する変数を入力させる。
int roup(int re){ //この関数の 引数はint型、返り値もint型。

  int in; //入力用。

  while(1){

    printf("数値入力=>");
    scanf("%d", &in);

    if(in == 999)
      break;

    re = addition(in, re); //関数"addition"に"in"と"re"の足し算をさせて、結果を"re"に入れる。

  }

  return re; //"re"を呼び出し元(今回はmain関数)に返す。

}
