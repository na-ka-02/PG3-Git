#include <iostream>
#include <list>
#include<stdio.h>

int main()
{
	std::list<const char*>stationList
	{
		//山手線の駅名をまとめた双方向リスト
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani",
		"Nippori", "Tabata", "Komagome", "Sugama", "Otsuka",
		"Mejiro", "Takadanobaba", "Shin-Okubo", "Shinjuku","Yoyogi","Harajuku",
		"Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Shinagawa",
		"Tamati", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	printf("\n1970年の山手線の駅名\n");
	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		if (*itr == "Tabata")
		{
			itr = stationList.insert(itr, "Nishi-Nippori");
			++itr;
		}
		std::cout << *itr << std::endl;
	}

	printf("\n2019年の山手線の駅名\n");
	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		if(*itr=="Shinagawa")
		{
			itr = stationList.insert(itr, "Takanawa Gateway");
			++itr;
		}
		std::cout << *itr << std::endl;
	}

	printf("\n2022年の山手線の駅名\n");
	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		std::cout << *itr << std::endl;
	}
	return 0;
}

