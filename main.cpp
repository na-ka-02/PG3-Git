#include <iostream>
#include <list>

// �R����̉w����char*�^�̔z��Œ�`
const char* station_names[] = {
	"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani",
	"Nippori", "Nishi-Nippori", "Tabata", "Komagome", "Sugama", "Otsuka",
	"Mejiro", "Takadanobaba", "Shin-Okubo", "Shinjuku","Yoyogi","Harajuku",
	"Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Shinagawa",
	"Takanawa Gateway","Tamati", "Hamamatsucho", "Shimbashi", "Yurakucho",
};

// �o�������X�g�̌^�G�C���A�X
using StationList = std::list<const char*>;

// �w�肵���N�̎R����̉w���X�g��\������֐�
void displayStationList(const StationList& stations, int year) {
	std::cout << "=== " << year << "�N�̎R����̉w���X�g ===" << std::endl;
	for(std::list<char>::iterator)
	std::cout << std::endl;
}

int main() {
	// 1970�N�A2019�N�A2022�N�̎R����̉w���X�g���쐬
	StationList stations_1970(station_names, station_names + sizeof(station_names) / sizeof(station_names[0]));
	StationList stations_2019(station_names, station_names + sizeof(station_names) / sizeof(station_names[0]));
	StationList stations_2022(station_names, station_names + sizeof(station_names) / sizeof(station_names[0]));

	// ���ꂼ��̎��_�ł̉w���X�g��\��
	displayStationList(stations_1970, 1970);
	displayStationList(stations_2019, 2019);
	displayStationList(stations_2022, 2022);

	return 0;
}

