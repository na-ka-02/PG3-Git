#pragma once
#include "DeathEater.h"

//デメンタークラスの定義
class NoFriend :public FriendEnjoy
{
public:/*メンバ変数*/
	//コンストラクタ(宣言)
	NoFriend();
	//デストラクタ(宣言)
	~NoFriend();
	//攻撃(宣言)
	void FriendOver()override;

private:/*メンバ変数*/
};