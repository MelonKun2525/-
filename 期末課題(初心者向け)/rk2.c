#include<stdio.h>

int main(void){

  int in, re = 0; //"in"�͓��͗p�A"re"�͍��v���i�[����p�B

  while(1){ //"rk2"��"rk1"�Ƃ���Ȃɕς��Ȃ�������ɐ����Ȃ���B

    printf("���l����=>");
    scanf("%d", &in);

    if(in == 999)
      break;

    re += in;

  }

  printf("���v��%d�ł��B\n", re);
  return 0;

}
