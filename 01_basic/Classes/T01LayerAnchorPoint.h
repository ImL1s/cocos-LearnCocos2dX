#pragma once
 
#include "cocos2d.h"
USING_NS_CC;

class T01LayerAnchorPoint : public CCLayer
{
public:
	CCSprite *spr;
	static T01LayerAnchorPoint* create();
	static CCScene* scene();
	bool init();
	void draw(Renderer *renderer, const Mat4 &transform, uint32_t flags) override;
	void mySchedule(float dt);

private:

};

