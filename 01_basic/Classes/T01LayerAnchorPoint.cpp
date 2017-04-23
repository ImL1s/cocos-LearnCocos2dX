#include "T01LayerAnchorPoint.h"
 
T01LayerAnchorPoint * T01LayerAnchorPoint::create()
{
	T01LayerAnchorPoint *pRet = new T01LayerAnchorPoint();
	if (pRet && pRet->init())
	{
		pRet->autorelease();
	}
	else
	{
		delete pRet;
		pRet = NULL;
	}
	return pRet;
}

CCScene * T01LayerAnchorPoint::scene()
{
	CCScene *scene = CCScene::create();
	T01LayerAnchorPoint *layer = T01LayerAnchorPoint::create();
	scene->addChild(layer);
	return scene;
}

bool T01LayerAnchorPoint::init()
{
	if (CCLayer::init())
	{
		CCSize winSize = CCDirector::sharedDirector()->getWinSize();
		spr = CCSprite::create("anchor3.png");
		spr->setAnchorPoint(ccp(1, 1));
		spr->setPosition(ccp(winSize.width, winSize.height));
		addChild(spr);
		return true;
	}

	return false;
}

void T01LayerAnchorPoint::draw(Renderer * renderer, const Mat4 & transform, uint32_t flags)
{
}

void T01LayerAnchorPoint::mySchedule(float dt)
{
}
