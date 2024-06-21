#pragma once
#include"stdio.h"

class MeetFriend
{
public:/*メンバ関数*/
	//コンストラクタ(宣言)
	MeetFriend();
	//デストラクタ
	virtual	~MeetFriend();
	//攻撃(宣言)
	virtual void Attack();

protected:/*メンバ変数*/
	//名前
	const char* name;
};