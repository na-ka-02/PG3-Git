#pragma once
template<typename Type1, typename Type2>

class MinFunc
{
public:
	//メンバ変数
	Type1 num1;
	Type2 num2;

	//コンストラクタ
	MinFunc(Type1 num1, Type2 num2) : num1(num1), num2(num2) {};

	//メンバ関数
	//小さい数字を返す
	Type1 Min()
	{
		//num1がnum2より小さかったらaを返す
		if (num1 < num2)
		{
			return static_cast<Type1>(num1);
		}
		//num2がnum1より小さかったらaを返す
		else
		{
			return static_cast<Type1>(num2);
		}
	}
};