#include"Rectangle.h"
#include<stdio.h>

void Rectangle::Size()
{
	answer_ = x_ * y_;
}

void Rectangle::Draw()
{
	Size();
	printf("–ÊÏ‚Í%d‚Å‚·", answer_);
}
