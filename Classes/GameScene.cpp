#include "GameScene.h"
#include "Hero.h"
#include "MyBlock.h"


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

void GameScene::update(float delta)
{
	Vector<Block*> blockArray;
	// create block for count is number
	currentFrameIndex++;
	if (currentFrameIndex > nextFrameCount)
	{
		// number equal value, set new position 
		resetFrameCount();
		Sprite *pBlock = Block::create();
		addChild(pBlock);
		// add block to vector
		blockArray.pushBack(blockArray);
	}

	for (int i=blockArray.size()-1;i>=0;i--)
	{
	}


}
void GameScene::resetFrameCount()
{
	currentFrameIndex = 0;
	nextFrameCount = rand() % 40 + 30;
}