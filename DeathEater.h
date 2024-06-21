#pragma once
#include"stdio.h"

class DeathEater
{
public:/*メンバ関数*/
	//コンストラクタ(宣言)
	DeathEater();
	//デストラクタ
	virtual	~DeathEater();
	//攻撃(宣言)
	virtual void Attack();

protected:/*メンバ変数*/
	//名前
	const char* name;
};