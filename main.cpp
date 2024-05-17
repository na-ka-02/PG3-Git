#include <iostream>
#include <list>
#include<stdio.h>

int main()
{
	std::list<const char*>stationList
	{
		//�R����̉w�����܂Ƃ߂��o�������X�g
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani",
		"Nippori", "Tabata", "Komagome", "Sugama", "Otsuka",
		"Mejiro", "Takadanobaba", "Shin-Okubo", "Shinjuku","Yoyogi","Harajuku",
		"Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Shinagawa",
		"Tamati", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	printf("\n1970�N�̎R����̉w��\n");
	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		if (*itr == "Tabata")
		{
			itr = stationList.insert(itr, "Nishi-Nippori");
			++itr;
		}
		std::cout << *itr << std::endl;
	}

	printf("\n2019�N�̎R����̉w��\n");
	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		if(*itr=="Shinagawa")
		{
			itr = stationList.insert(itr, "Takanawa Gateway");
			++itr;
		}
		std::cout << *itr << std::endl;
	}

	printf("\n2022�N�̎R����̉w��\n");
	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		std::cout << *itr << std::endl;
	}
	return 0;
}

