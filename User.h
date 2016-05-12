#pragma once

#include "cocos2d.h"
#include "Type.h"
#include "Job.h"
USING_NS_CC;

//인게임 유저
class User{
private:
	int Money;
	int Increasing;//0.1초당 늘어날 Money;

	int Nexus_Health;
	int Nexus_Damaged;

	int Job_Level;//아직 안 정해지면 0

public:

	User();

	void IncreasingMoney();


};
