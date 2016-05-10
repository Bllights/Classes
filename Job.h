#pragma once

#include "cocos2d.h"

#include "CReference.h"
#include "Card.h"
USING_NS_CC;

class Job : public CReference,Card{
public:
  Job();
  Job(bool Gold,int kind){
    this.Gold=Gold;
    this.kind=kind;
    Job();
  }

  void SetRand();

  void GetEXP(int num) override;

};
