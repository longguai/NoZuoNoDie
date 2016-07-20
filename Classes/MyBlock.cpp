#include "MyBlock.h"
USING_NS_CC;


bool Block::init()
{
	Sprite::init();

	setAnchorPoint(Vec2::ZERO);
	// create rand width and hight
	Size size = Size(rand() % 20 + 10, rand() % 30 + 10);
	Size winSize = Director::getInstance()->getWinSize();

	// set texture rect size
	setTextureRect(Rect(0, 0, size.width, size.height));
	// set content size
	setContentSize(size);
	// set color
	setColor(Color3B::BLACK);
	// set position in layer
	setPositionX(winSize.width - 50);
	// schedule
	scheduleUpdate();

	return true;
}
void Block::update(float delta)
{
	setPositionX(getPositionX() - 6);
}