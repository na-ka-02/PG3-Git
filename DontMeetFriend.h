#pragma once
#include "MeetFriend.h"

//デメンタークラスの定義
class DontMeetFriend :public MeetFriend
{
public:/*メンバ変数*/
	//コンストラクタ(宣言)
	DontMeetFriend();
	//デストラクタ(宣言)
	~DontMeetFriend();
	//攻撃(宣言)
	void Attack()override;

private:/*メンバ変数*/
};