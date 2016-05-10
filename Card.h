#pragma once

#include "cocos2d.h"
#include "JobKind.h"
#include "CardSprite.h"
USING_NS_CC;

class Card : public CardSprite{
protected:
  bool Gold;

  int c_lev;
  struct C_kind{
    int kind;
    int Parents;//윗 객체 또는 자기 자신
    int Childs;//자식 또는 자기 자신
  };

  C_kind M_kind;

protected:
  int Attack;
  int Health;
  int Damanged;


};

//TCG 게임 Reference
