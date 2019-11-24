#include<stdio.h>

int main(void){

  int in, sum = 0;

  printf("加算開始します\n");

  while(1){

    printf("1・2・3・4・5の数値を入力　0で終了\n");
    printf(">");
    scanf("%d", &in);

    if(in == 0){

      break; //0が入力されたから、breakで無限ループから脱出。

    }else if(in >= 1 && in <= 5){ // "in >= 1"は"inが1以上だったら"という意味。"in <= 5"は"inが5以下だったら"という意味。"&&"は"左の条件と右の条件の両方に当てはまる場合"という意味。
                                  // つまり今回の場合は、"inが1以上でかつinが5以下の場合(inが1～5の場合)"という条件式になる。
      sum += in; //sum = sum + in の略。
      printf("%dを加算しました\n", in);

    }else{ //上記の条件以外の場合(今回は、inが0～5以外だった場合という意味)

      printf("1～5 または 0 の数値を入力してください\n");

    }
  }

  printf("最終結果は%dです\n", sum); //0が入力され、ループから抜けた際に"sum"の出力を行う。
  return 0;

}
