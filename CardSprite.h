#pragma once

#include "cocos2d.h"

USING_NS_CC;

class CardSprite{
public:
	Sprite* s_card;
	Sprite* GoldFrame;
public:
	Rect getBoundingBox();
	Point getPosition();
	void setSprite(std::string filepath);
	void setPosition(int x, int y);
	void addParent(Node* node);
	void setAction(Action* action);
};
