#include<stdio.h>

int sub(void);

int main(void){

  int sum;

  printf("���Z�J�n���܂�\n");

  sum = sub();

  printf("�ŏI���ʂ�%d�ł�\n", sum);

  return 0;

}

int sub(void){

  int in, sum = 0;

  while(1){

    printf("1�E2�E3�E4�E5�̐��l����́@0�ŏI��\n");
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
        printf("%d�����Z���܂���\n", in);

        break;

      default:

        printf("1�`5 �܂��� 0 �̐��l����͂��Ă�������\n");

    }
  }
}
