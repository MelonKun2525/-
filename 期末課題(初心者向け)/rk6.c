#include<stdio.h>

int addition(int, int); //�֐�"addition"�̃v���g�^�C�v�錾�B
int roup(int); //�֐�"roup"�̃v���g�^�C�v�錾�B

int main(void){

  int re = 0; //���v���i�[����p�B

  re = roup(re); //�֐�"roup"���Ăяo���Areturn���ꂽ���̂�"re"�ɓ����B

  printf("���v��%d�ł��B\n", re);
  return 0;

}

// �ϐ�"in"�ɂ͑�������������͂�����B"re"�ɂ͍��܂ō��v���Ă����l����͂�����B
int addition(int in, int re){ //���̊֐��� ������int�^2�A�Ԃ�l��int�^�B

  //"rk5"�Ő��������ʂ�A�֐�"addition"�̕ϐ��͖��O�������ł�main�֐���roup�֐��̕ϐ��Ƃ͕ʕ�������ˁB

  re += in; //"in"��"re"�𑫂������̂�"re"�ɓ����B
  return re; //"re"�̒l���Ăяo����(�����roup�֐�)�ɕԂ��B

}

//"re"�ɂ͍��v���i�[����ϐ�����͂�����B
int roup(int re){ //���̊֐��� ������int�^�A�Ԃ�l��int�^�B

  int in; //���͗p�B

  while(1){

    printf("���l����=>");
    scanf("%d", &in);

    if(in == 999)
      break;

    re = addition(in, re); //�֐�"addition"��"in"��"re"�̑����Z�������āA���ʂ�"re"�ɓ����B

  }

  return re; //"re"���Ăяo����(�����main�֐�)�ɕԂ��B

}
