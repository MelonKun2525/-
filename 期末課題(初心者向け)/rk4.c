#include<stdio.h>

int main(void){

  int in, re = 0, *pe; //"in"�͓��͗p�A"re"�͍��v���i�[����p�A"*pe"�̓|�C���^�p�B

  pe = &re;

  /* ���������� "rk3"�Ƃ�邱�ƕς��܂���B���������� */

  while(1){

    printf("���l����=>");
    scanf("%d", &in);

    if(in == 999)
      break;

    *pe = *pe + in;

  }

  printf("���v��%d�ł��B\n", *pe);
  return 0;

}
