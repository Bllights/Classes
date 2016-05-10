#pragma once

#include "cocos2d.h"
#include "JobKind.h"
#include "CardSprite.h"
USING_NS_CC;

class Card : public CardSprite{
protected:

  bool Gold;

  int c_lev;

  int kind;

};

//TCG 게임 Reference
