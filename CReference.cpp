#include "CReference.h"

int DataManager::Jobkind[10]={1,2,3,4,5,6,7,8,9,10};
int DataManager::L_EXP[50]={0};
int DataManager::GetEXPs(int Level){

	return Level;
}
CReference::CReference(){
	CCLOG("CReference 持失切1");
	r_Level= 1;
	r_MaxEXP=DataManager::GetEXPs(r_Level);
	r_EXP=0;
}
CReference::CReference(int Level){
	CCLOG("CReference 持失切2");
	r_Level=Level;
	r_MaxEXP=DataManager::GetEXPs(Level);
	r_EXP=0;
}
void CReference::LevelUp(){
	r_Level++;
	r_MaxEXP=DataManager::GetEXPs(r_Level);
}
