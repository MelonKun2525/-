#include "playerdata.h"

int main(void){

  //CreatePlayerData("�߂�񂭂�");
  //PrintPlayerData();

  CreatePlayerData("�߂�񂭂�1");
  CreatePlayerData("�߂�񂭂�2");
  CreatePlayerData("�߂�񂭂�3");

  LoadPlayerData(1);
  SetPokimonId(0, 0);
  SetPokimonName(0, "�s�J�`���E");
  SetPokimonLv(0, 1);
  SetPokimonAtk(0, 100);
  SetPokimonDef(0, 100);
  SetPokimonHp(0, 100);
  SavePlayerData();

  return 0;

}
