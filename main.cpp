#include <stdio.h>
#include"min.h"

int main()
{
	//int‚Æint‚ğ”ä‚×‚é
	MinFunc<int, int>intIntNum(10, 20);
	//int‚Æfloat‚ğ”ä‚×‚é
	MinFunc<int, float>intFloatNum(10, 20.0f);
	//int‚Ædouble‚ğ”ä‚×‚é
	MinFunc<int, double>intDoubleNum(10, 20.0);
	//float‚Æfloat‚ğ”ä‚×‚é
	MinFunc<float, float>floatFloatNum(10.0f, 20.0f);
	//float‚Ædouble‚ğ”ä‚×‚é
	MinFunc<float, double>floatDoubleNum(10.0f, 20.0);
	//double‚Ædouble‚ğ”ä‚×‚é
	MinFunc<double, double>doubleDoubleNum(10.0, 20.0);

	//o—Í
	//int‚Æint
	printf("int‚Æint‚Ì”š‚ğ”ä‚×‚é:%d\n",intIntNum.Min());
	//int‚Æfloat
	printf("int‚Æfloat‚Ì”š‚ğ”ä‚×‚é:%d\n", intFloatNum.Min());
	//int‚Ædouble
	printf("int‚Ædouble‚Ì”š‚ğ”ä‚×‚é:%d\n", intDoubleNum.Min());
	//float‚Æfloat
	printf("float‚Æfloat‚Ì”š‚ğ”ä‚×‚é:%f\n", floatFloatNum.Min());
	//float‚Ædouble
	printf("float‚Ædouble‚Ì”š‚ğ”ä‚×‚é:%f\n", floatDoubleNum.Min());
	//double‚Ædouble
	printf("double‚Ædouble‚Ì”š‚ğ”ä‚×‚é:%lf\n", doubleDoubleNum.Min());
	return 0;
}