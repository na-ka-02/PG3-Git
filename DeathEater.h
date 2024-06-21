#pragma once
#include"stdio.h"

class FriendEnjoy
{
public:/*メンバ関数*/
	//コンストラクタ(宣言)
	FriendEnjoy();
	//デストラクタ
	virtual	~FriendEnjoy();
	//攻撃(宣言)
	virtual void FriendOver();

protected:/*メンバ変数*/
	//名前
	const char* name;
};