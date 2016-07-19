#include "GameScene.h"


cocos2d::Scene* GameScene::createScene()
{
	auto scene = Scene::create();
	
	// cache picture plsit
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile("hero.plist");

	auto layer = GameScene::create();
	scene->addChild(layer);

	return scene;
}

bool GameScene::init()
{
	LayerColor::initWithColor(Color4B::WHITE); // init white background

	// set touch operator
	auto listener = EventListenerTouchOneByOne::create();
	listener->onTouchBegan = [](Touch *touch, Event *event) {

		return true;
	};
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);

	// create main hero sprite
	Sprite *pHero = Hero::create();
	_pHero = pHero;
	addChild(_pHero);

	// set schedule, use rand create block
	scheduleUpdate();

	// use store block


	return true;
}
