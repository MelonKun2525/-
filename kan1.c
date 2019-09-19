#include<stdio.h>

float judge(float, float);

void main(void){

  float a, b, min;

  printf("ˆê‚Â–Ú“ü—Í=>");
  scanf("%f", &a);
  printf("“ñ‚Â–Ú“ü—Í=>");
  scanf("%f", &b);

  min = judge(a, b);

  printf("¬‚³‚¢‚Ì‚Í %.1f ‚Å‚·B\n", min);

}

float judge(float x, float y){

  if(x > y)
    return y;

  else
    return x;

}
