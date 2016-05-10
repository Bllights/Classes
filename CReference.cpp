#include "CReference.h"

CReference::CReference(){
  Level =1;
  MaxEXP=DataManager::GetEXPs(Level);
  EXP=0;
}
CReference::CReference(int Level){
  this.Level=Level;
  MaxEXP=DataManager::GetEXPs(Level);
  EXP=0;
}
void CReference::LevelUp(){
  Level++;
  MaxEXP=DataManager::GetEXPs(level);
}
