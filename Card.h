#pragma once

#include "cocos2d.h"
#include "Type.h"
#include "CardSprite.h"
USING_NS_CC;
struct C_kind{
	int kind;
	int Parents;//윗 객체 또는 자기 자신
	int Childs;//자식 또는 자기 자신
};
class Card : public Ref,public CardSprite{
protected:
	bool Gold;
	C_kind M_kind;

protected:
	int c_Type;
	int c_Attack;
	int c_Health;
	int n_Gold;
	int c_Damanged;
	int c_strength;
	bool c_onSpecial;

};

//TCG 게임 Reference
