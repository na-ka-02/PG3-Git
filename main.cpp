#include <stdio.h>
#include"min.h"

int main()
{
	//intとintを比べる
	MinFunc<int, int>intIntNum(10, 20);
	//intとfloatを比べる
	MinFunc<int, float>intFloatNum(10, 20.0f);
	//intとdoubleを比べる
	MinFunc<int, double>intDoubleNum(10, 20.0);
	//floatとfloatを比べる
	MinFunc<float, float>floatFloatNum(10.0f, 20.0f);
	//floatとdoubleを比べる
	MinFunc<float, double>floatDoubleNum(10.0f, 20.0);
	//doubleとdoubleを比べる
	MinFunc<double, double>doubleDoubleNum(10.0, 20.0);

	//出力
	//intとint
	printf("intとintの数字を比べる:%d\n",intIntNum.Min());
	//intとfloat
	printf("intとfloatの数字を比べる:%d\n", intFloatNum.Min());
	//intとdouble
	printf("intとdoubleの数字を比べる:%d\n", intDoubleNum.Min());
	//floatとfloat
	printf("floatとfloatの数字を比べる:%f\n", floatFloatNum.Min());
	//floatとdouble
	printf("floatとdoubleの数字を比べる:%f\n", floatDoubleNum.Min());
	//doubleとdouble
	printf("doubleとdoubleの数字を比べる:%lf\n", doubleDoubleNum.Min());
	return 0;
}