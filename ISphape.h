#pragma once
#include"stdint.h"

class ISphape
{
public:
	//面積と描画
	virtual void Size() = 0;
	virtual void Draw() = 0;

protected:
	//面積の数字
	uint32_t x_ = 4;
	uint32_t y_ = 3;
	//面積を保存する数字
	uint32_t answer_ = 0;
};