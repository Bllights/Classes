#include "CardSprite.h"

void CardSprite::setSprite(std::string filepath){
	s_card=Sprite::create(filepath);
}
void CardSprite::setPosition(int x, int y){
	s_card->setPosition(x,y);
}
void CardSprite::addParent(Node* node){
	node->addChild(s_card);
}
void CardSprite::setAction(Action* action){
	s_card->runAction(action);
}
Point CardSprite::getPosition(){
	return s_card->getPosition();
}
Rect CardSprite::getBoundingBox(){
	return s_card->getBoundingBox();
}