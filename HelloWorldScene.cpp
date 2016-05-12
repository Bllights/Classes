#include "HelloWorldScene.h"

HelloWorld::HelloWorld(){
	m_card= new Card();
	m_card->setSprite("ExampleCard.png");
	background= Sprite::create("ExampleBackground.png");
	background->setAnchorPoint(Point(0,0));
	StackCardnum=0;
	onAction=false;
}
#pragma region Touch

Card* Touch_Card;
int Cardnum;
bool HelloWorld::onTouchBegan(Touch* touch,Event* unused_event){
	Touch_Card=0;
	Cardnum=0;
	for(Card* TmpCard : Stack_Card){
		if(TmpCard->getBoundingBox().containsPoint(touch->getLocation()))
			Touch_Card=TmpCard;
		Cardnum++;
	}
	return true;
}
void HelloWorld::onTouchMoved(Touch* touch,Event* unused_event){

}
void HelloWorld::onTouchEnded(Touch* touch,Event* unused_event){
	if(Touch_Card!=0){
		if(Touch_Card->getBoundingBox().containsPoint(touch->getLocation())){
			Touch_Card->s_card->setVisible(false);
			StackCardnum--;
			Stack_Card.eraseObject(Touch_Card);
			for(int i=Cardnum;i<6;i++){
				auto moveBy=MoveBy::create(0.45,Point(60,0));
				Stack_Card.at(i)->setAction(moveBy);

			}
		}
	}
}
#pragma endregion
Scene* HelloWorld::createScene()
{
    auto scene = Scene::create();

    auto layer = HelloWorld::create();

    scene->addChild(layer);

    return scene;
}

bool HelloWorld::init()
{

    if ( !Layer::init() )
    {
        return false;
    }
	this->addChild(background);
	/*
	m_card->addParent(this);
	m_card->setPosition(250,160);
	*/
	EventListenerTouchOneByOne *listener = EventListenerTouchOneByOne::create();
	listener->onTouchBegan = CC_CALLBACK_2(HelloWorld::onTouchBegan,this);
	listener->onTouchMoved = CC_CALLBACK_2(HelloWorld::onTouchMoved, this);//같음
	listener->onTouchEnded = CC_CALLBACK_2(HelloWorld::onTouchEnded, this);//같음
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);//이 레이어에 리스너를 넣어준다.

	this->schedule(schedule_selector(HelloWorld::SendCard),2);
	//this->schedule(schedule_selector(HelloWorld::CheckCardStop));
    return true;
}
void HelloWorld::SendCard(float dt){
	if(MAX_CARDSTACK>StackCardnum){
		Card* TmpCard= new Card();
		TmpCard->setSprite("ExampleBelowCard.png");
		TmpCard->addParent(this);
		TmpCard->setPosition(0,50);
		float times=
			(float)(STACK_CARD_MAX_Y-StackCardnum*STACK_CARD_DISTANCE)/
			(float)STACK_CARD_MAX_Y*STACK_CARD_TIME;
		MoveBy* actions = MoveBy::create(times,
			Point(STACK_CARD_MAX_Y-StackCardnum*STACK_CARD_DISTANCE,0));
		TmpCard->setAction(actions);
		Stack_Card.pushBack(TmpCard);
		StackCardnum++;
	}
}
void HelloWorld::CheckCardStop(float dt){
	int x;
	int i=0;
	for(Card* TmpCard : Stack_Card){
		x = TmpCard->getPosition().x;
		if(x==STACK_CARD_MAX_Y-i*STACK_CARD_DISTANCE){

		}
	}
}