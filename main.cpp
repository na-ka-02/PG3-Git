#include<stdio.h>
#include"Enemy.h"

int main()
{
	//Enemyの生成
	Enemy*enemy=new Enemy();
	//呼び出し
	enemy->Update();
	//削除
	delete enemy;
}