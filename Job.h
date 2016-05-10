#pragma once

#include "cocos2d.h"

#include "CReference.h"
#include "JobKind.h"
#include "Card.h"

USING_NS_CC;

class Job : public CReference,Card{
public:
  Job();
  Job(bool Gold,int kind);

  void SetKinds(int Parents, int Childs);

  void SetRand();
};
