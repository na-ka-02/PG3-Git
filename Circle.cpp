#include"Circle.h"
#include<stdio.h>
#define _USE_MATH_DEFINES
#include"math.h"

void Circle::Size()
{
	answer_ = int(x_ * x_* M_PI);
}

void Circle::Draw()
{
	Size();
	printf("�ʐς�%d�ł�", answer_);
}
