#pragma once
#include "DeathEater.h"

//デメンタークラスの定義
class Load :public DeathEater
{
public:/*メンバ変数*/
	//コンストラクタ(宣言)
	Load();
	//デストラクタ(宣言)
	~Load();
	//攻撃(宣言)
	void Attack()override;

private:/*メンバ変数*/
};