#include"Rectangle.h"
#include<stdio.h>

void Rectangle::Size()
{
	answer_ = x_ * y_;
}

void Rectangle::Draw()
{
	Size();
	printf("�ʐς�%d�ł�", answer_);
}
