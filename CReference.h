#pragma once

#include "cocos2d.h"
#include "DataManager.h"

USING_NS_CC;

class CReference{
protected:
  CReference();
  CReference(int Level);

protected:
  int Level;
  int MaxEXP;
  int EXP;
  
public:
  void LevelUp();

};
//RPG 게임 Reference
