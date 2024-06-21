#include <stdio.h>
#include"DeathEater.h"
#include"Load.h"
#include"Dementor.h"

int main()
{
	DeathEater* death_eaters[4];

	//生成フェーズ
	for (int i = 0; i < 2; i++)
	{
		if (i < 1)

			death_eaters[i] = new Dementor;

		else

			death_eaters[i] = new Load;

	}

	//攻撃フェーズ
	for (int i = 0; i < 2; i++)
	{
		death_eaters[i]->Attack();
	}
	//破棄フェーズ
	for (int i = 0; i < 2; i++)
	{
		delete death_eaters[i];
	}
	return 0;
}