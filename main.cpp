#include <iostream>
#include <list>

// 山手線の駅名をchar*型の配列で定義
const char* station_names[] = {
	"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani",
	"Nippori", "Nishi-Nippori", "Tabata", "Komagome", "Sugama", "Otsuka",
	"Mejiro", "Takadanobaba", "Shin-Okubo", "Shinjuku","Yoyogi","Harajuku",
	"Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Shinagawa",
	"Takanawa Gateway","Tamati", "Hamamatsucho", "Shimbashi", "Yurakucho",
};

// 双方向リストの型エイリアス
using StationList = std::list<const char*>;

// 指定した年の山手線の駅リストを表示する関数
void displayStationList(const StationList& stations, int year) {
	std::cout << "=== " << year << "年の山手線の駅リスト ===" << std::endl;
	for(std::list<char>::iterator)
	std::cout << std::endl;
}

int main() {
	// 1970年、2019年、2022年の山手線の駅リストを作成
	StationList stations_1970(station_names, station_names + sizeof(station_names) / sizeof(station_names[0]));
	StationList stations_2019(station_names, station_names + sizeof(station_names) / sizeof(station_names[0]));
	StationList stations_2022(station_names, station_names + sizeof(station_names) / sizeof(station_names[0]));

	// それぞれの時点での駅リストを表示
	displayStationList(stations_1970, 1970);
	displayStationList(stations_2019, 2019);
	displayStationList(stations_2022, 2022);

	return 0;
}

