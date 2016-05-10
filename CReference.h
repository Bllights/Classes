#pragma once

#include "cocos2d.h"

USING_NS_CC;

class CReference{
protected:
  CReference(){
    Level=1;
    EXP=0;
  }
  int Level;
  int EXP;

  void LevelUp(){
    Level++;
  }

  void GetEXP(int num){
    EXP+=num;
  }

};
//RPG 게임 Reference
