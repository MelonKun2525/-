#include<stdio.h>

int sub(void); //�֐�"sub"�̃v���g�^�C�v�錾�B

int main(void){

  int sum; //���v���i�[����p�B

  printf("���Z�J�n���܂�\n");

  sum = sub(); //�֐�"sub"���Ăяo���Areturn���ꂽ���̂�"sum"�ɓ����B
               //���Ȃ݂Ɋ֐����Ăяo�����ꍇ�A�Ăяo�����֐����I������܂ŌĂяo�����̏������X�g�b�v����B

  printf("�ŏI���ʂ�%d�ł�\n", sum);
  return 0;

}

int sub(void){ //���̊֐��� �����͖����A�Ԃ�l��int�^�B

  int in, sum = 0; //"in"�͓��͗p�A"sum"�͍��v���i�[����p�B
                  //�����Œ��ӂ����A����̕ϐ���static�^(�ÓI�ϐ�)����Ȃ��̂ŁAmain��"sum"�Ƃ͖��O�����������A�S���̕ʕ��ł���B

  while(1){

    printf("1�E2�E3�E4�E5�̐��l����́@0�ŏI��\n");
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
        printf("%d�����Z���܂���\n", in);

        break;

      default:

        printf("1�`5 �܂��� 0 �̐��l����͂��Ă�������\n");

    }
  }

  return sum; //�֐�"sub"�̕ϐ�"sum"��main�֐��ɕԂ��B����̏ꍇ�́Amain�֐���"sum"�ɒl������B

}
