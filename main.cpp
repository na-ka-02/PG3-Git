#include"ISphape.h"
#include"Circle.h"
#include"Rectangle.h"

int main()
{
	ISphape* iSphape[4] = {};

	//生成フェーズ
	for (int i = 0; i < 2; ++i)
	{
		if (i < 1)
		{
			iSphape[i] = new Circle;
		}
		else
		{
			iSphape[i] = new Rectangle;
		}
	}
	//結果反映
	for (int i = 0; i < 2; ++i)
	{
		iSphape[i]->Draw();
	}
	//削除
	for (int i = 0; i < 2; ++i)
	{
		delete iSphape[i];
	}
	
}