#pragma once

#include "cocos2d.h"
USING_NS_CC;

class DataManager{
public:
  static void GetEXPs(int Level);
  static int Jobkind[10];
  static int L_EXP[50];
};
int DataManager::JobKind[10]={1,2,3,4,5,6,7,8,9,10};
int DataManager::L_EXP[50]={};
void DataManager::GetEXPs(int Level){

}
