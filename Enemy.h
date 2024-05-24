#pragma once
#include <iostream>
#include <functional>
#include <cstdlib>
#include <ctime>

class Enemy
{
public:
	//接近
	void Approach();
	//射撃
	void Shooting();
	//離脱
	void Secession();
	//更新
	void Update();

private:
	//メンバ関数ポインタのテーブル
	static void(Enemy::*spFuncTable[])();
};