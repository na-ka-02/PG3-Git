#include <stdio.h>
#include"min.h"

int main()
{
	//int��int���ׂ�
	MinFunc<int, int>intIntNum(10, 20);
	//int��float���ׂ�
	MinFunc<int, float>intFloatNum(10, 20.0f);
	//int��double���ׂ�
	MinFunc<int, double>intDoubleNum(10, 20.0);
	//float��float���ׂ�
	MinFunc<float, float>floatFloatNum(10.0f, 20.0f);
	//float��double���ׂ�
	MinFunc<float, double>floatDoubleNum(10.0f, 20.0);
	//double��double���ׂ�
	MinFunc<double, double>doubleDoubleNum(10.0, 20.0);

	//�o��
	//int��int
	printf("int��int�̐������ׂ�:%d\n",intIntNum.Min());
	//int��float
	printf("int��float�̐������ׂ�:%d\n", intFloatNum.Min());
	//int��double
	printf("int��double�̐������ׂ�:%d\n", intDoubleNum.Min());
	//float��float
	printf("float��float�̐������ׂ�:%f\n", floatFloatNum.Min());
	//float��double
	printf("float��double�̐������ׂ�:%f\n", floatDoubleNum.Min());
	//double��double
	printf("double��double�̐������ׂ�:%lf\n", doubleDoubleNum.Min());
	return 0;
}