#include<stdio.h>

int main(void){

  int in, sum = 0, *p; //"in"�͓��͗p�A"sum"�͍��v���i�[����p�A"*p"�̓|�C���^�p�B

  p = &sum; //"sum"�Ƃ̊֘A�t�� ����ȍ~��"*p"��"sum"�̑�p���ł���B

  /* ���������� �����艺��"sum"��"*p"�ɕς��������B���������� */

  printf("���Z�J�n���܂�\n");

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

        *p = *p + in; //�|�C���^�ϐ��͏ȗ����ł��Ȃ��ƕ��������Ƃ����邩���B
        printf("%d�����Z���܂���\n", in);

        break;

      default:

        printf("1�`5 �܂��� 0 �̐��l����͂��Ă�������\n");

    }
  }

  printf("�ŏI���ʂ�%d�ł�\n", *p);
  return 0;

}
