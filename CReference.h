#pragma once

#include "cocos2d.h"
#include "DataManager.h"

USING_NS_CC;

class CReference{
protected:
	CReference();
	CReference(int Level);

protected:
	int r_Level;
	int r_MaxEXP;
	int r_EXP;
	int r_Attack;
	int r_Health;
	int r_Damanged;
public:
	void LevelUp();

};
//RPG 게임 Reference
