#include<stdio.h>
#include"Enemy.h"

int main()
{
	//Enemy�̐���
	Enemy*enemy=new Enemy();
	//�Ăяo��
	enemy->Update();
	//�폜
	delete enemy;
}