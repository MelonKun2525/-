#include<stdio.h>

int main(void){

  int in, sum = 0;

  printf("���Z�J�n���܂�\n");

  while(1){

    printf("1�E2�E3�E4�E5�̐��l����́@0�ŏI��\n");
    printf(">");
    scanf("%d", &in);

    if(in == 0){

      printf("�ŏI���ʂ�%d�ł�\n", sum);

      return 0;

    }else if(in >= 1 && in <= 5){

      sum += in;
      printf("%d�����Z���܂���\n", in);

    }else{

      printf("1�`5 �܂��� 0 �̐��l����͂��Ă�������\n");

    }
  }
}
