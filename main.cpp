#include<stdio.h>
#include"Enemy.h"

int main()
{
	//Enemy‚Ì¶¬
	Enemy*enemy=new Enemy();
	//ŒÄ‚Ño‚µ
	enemy->Update();
	//íœ
	delete enemy;
}