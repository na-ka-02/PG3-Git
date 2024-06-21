#pragma once
#include "DeathEater.h"

//デメンタークラスの定義
class FriendAngrey :public FriendEnjoy
{
public:/*メンバ変数*/
	//コンストラクタ(宣言)
	FriendAngrey();
	//デストラクタ(宣言)
	~FriendAngrey();
	//攻撃(宣言)
	void FriendOver()override;

private:/*メンバ変数*/
};