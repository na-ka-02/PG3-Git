#include"ISphape.h"
#include"Circle.h"
#include"Rectangle.h"

int main()
{
	ISphape* iSphape[4] = {};

	//�����t�F�[�Y
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
	//���ʔ��f
	for (int i = 0; i < 2; ++i)
	{
		iSphape[i]->Draw();
	}
	//�폜
	for (int i = 0; i < 2; ++i)
	{
		delete iSphape[i];
	}
	
}