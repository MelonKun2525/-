#include<stdio.h>

int main(void){

  int in, re = 0; //"in"�͓��͗p�A"re"�͍��v���i�[����p�B

  for(;;){ //for�̒����Z�~�R������2�����ɂ��Ƃ��Ɩ������[�v���ł���B

    printf("���l����=>");
    scanf("%d", &in);

    if(in == 999)
      break;

    re += in;

  }

  printf("���v��%d�ł��B\n", re);
  return 0;

}
