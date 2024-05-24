#include "Enemy.h"

void(Enemy::* Enemy::spFuncTable[])() =
{
&Enemy::Approach,//接近
&Enemy::Shooting,//射撃
&Enemy::Secession//離脱
};

void Enemy::Approach()
{
	printf("敵が接近したよ!!\n");
}

void Enemy::Shooting()
{
	printf("敵が射撃したよ!!\n");
}

void Enemy::Secession()
{
	printf("敵が離脱したよ!!\n");
}

void Enemy::Update()
{
	(this->*spFuncTable[0])();
	(this->*spFuncTable[1])();
	(this->*spFuncTable[2])();
}
