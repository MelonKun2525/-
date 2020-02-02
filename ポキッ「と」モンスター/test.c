#include "playerdata.h"

int main(void){

  //CreatePlayerData("めろんくん");
  //PrintPlayerData();

  CreatePlayerData("めろんくん1");
  CreatePlayerData("めろんくん2");
  CreatePlayerData("めろんくん3");

  LoadPlayerData(1);
  SetPokimonId(0, 0);
  SetPokimonName(0, "ピカチュウ");
  SetPokimonLv(0, 1);
  SetPokimonAtk(0, 100);
  SetPokimonDef(0, 100);
  SetPokimonHp(0, 100);
  SavePlayerData();

  return 0;

}
