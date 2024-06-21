#pragma once
#include "MeetFriend.h"

//デメンタークラスの定義
class AngryFriend :public MeetFriend
{
public:/*メンバ変数*/
	//コンストラクタ(宣言)
	AngryFriend();
	//デストラクタ(宣言)
	~AngryFriend();
	//攻撃(宣言)
	void Attack()override;

private:/*メンバ変数*/
};