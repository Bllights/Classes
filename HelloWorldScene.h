#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "Job.h"

#define MAX_CARDSTACK 7
#define STACK_CARD_TIME 3.0f
#define STACK_CARD_MAX_Y 440
#define STACK_CARD_DISTANCE 60
USING_NS_CC;

class HelloWorld : public Layer
{
private:
	bool onAction;//¸ðµÎ
	Vector<Card*> Stack_Card;

	Sprite* background;

	Card* m_card;

	Job* m_job;

	int StackCardnum;
public:
	void CheckCardStop(float dt);
	void SendCard(float dt);
public:
	HelloWorld();
public:
	virtual bool onTouchBegan(Touch* touch,Event* unused_event);
	virtual void onTouchMoved(Touch* touch,Event* unused_event);
	virtual void onTouchEnded(Touch* touch,Event* unused_event);

public:

    static Scene* createScene();

    virtual bool init();

    CREATE_FUNC(HelloWorld);
};

#endif
