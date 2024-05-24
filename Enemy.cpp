#include "Enemy.h"

void(Enemy::* Enemy::spFuncTable[])() =
{
&Enemy::Approach,//接近
&Enemy::Shooting,//射撃
&Enemy::Secession//離脱
};

//敵が接近している表示
void Enemy::Approach()
{
	printf("敵が接近したよ!!\n");
}

//敵が射撃する表示
void Enemy::Shooting()
{
	printf("敵が射撃したよ!!\n");
}

//敵が離脱する表示
void Enemy::Secession()
{
	printf("敵が離脱したよ!!\n");
}

//更新
void Enemy::Update()
{
	for (int i = 0; i < 3; ++i)
	{
		(this->*spFuncTable[i])();
	}
}
