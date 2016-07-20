#include "GameOver.h"


USING_NS_CC;


bool GameOver::init()
{
	LayerColor::initWithColor(Color4B(0, 255, 0, 255));
	Size winSize = Director::getInstance()->getWinSize();
	Label *label = Label::createWithTTF("GameOver", "Arial", 40);
	label->setPosition(winSize.width / 2, winSize.height / 2);
	addChild(label);

	return true;
}

Scene* GameOver::scene()
{
	Scene *scene = Scene::create();
	GameOver *layer = GameOver::create();

	scene->addChild(layer);

	return scene;
}