#include<stdio.h>

int main(void){

  int in, sum = 0; //"in"�͓��͗p�A"sum"�͍��v���i�[����p�B

  printf("���Z�J�n���܂�\n");

  while(1){ //�������[�v

    printf("1�E2�E3�E4�E5�̐��l����́@0�ŏI��\n");
    printf(">");
    scanf("%d", &in);

    if(in == 0) //0�����͂��ꂽ�Ƃ��Awhile�̃��[�v���甲���鏈���B
      break; //for��while���̒���"break"������ƁA�����I�Ƀ��[�v����E�o�ł���B

    switch(in){

      case 1: //������case���d�˂邱�Ƃɂ���āA"�܂���"�Ƃ������f���ł���B
      case 2: //����̏ꍇ�́A"1 �܂���2 �܂���3 �܂���4 �܂���5"
      case 3:
      case 4:
      case 5:

        sum += in; //sum = sum + in; �̗�
        printf("%d�����Z���܂���\n", in);

        break;

      default: //��L��case�ȊO�̏ꍇ�B �����1�`5�ȊO�̐��������͂��ꂽ�Ƃ��B

        printf("1�`5 �܂��� 0 �̐��l����͂��Ă�������\n");

    }
  }

  printf("�ŏI���ʂ�%d�ł�\n", sum); //0�����͂���A���[�v���甲�����ۂ�"sum"�̏o�͂��s���B

  return 0;

}
