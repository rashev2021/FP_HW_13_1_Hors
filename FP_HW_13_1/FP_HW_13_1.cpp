#include <Windows.h>
#include <iostream>

using namespace std;

int const sizeX = 8;
int const sizeY = 8;
int x, y;

int arrayDesk[sizeX][sizeY];

void motionHors(int x, int y) {
	
	cout << endl;
	for (int i = 0; i < sizeX; i++) {
		cout << " ";
		for (int j = 0; j < sizeY; j++) {
			cout << "[" << " " << "]";

			if (i == y && j == x - 1) {
			
				cout << "[" << "#" << "]";
			}
		}
		cout << endl;
	}

}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Игра: Ход коня

	cout << endl << " Шахматная доска" << endl << endl;
	for (int i = 0; i < sizeX; i++) {
		cout << " ";
		for (int j = 0; j < sizeY; j++) {
			cout << "[" << " " << "]";
		}
		cout << endl;
	}

	cout << endl << " Поставьте коня. Введите координаты: " << endl;
	cin >> x >> y;
	motionHors(x,y);

	do {
		cout << endl << " Сделайте ход конем. Введите координаты: " << endl;
		cin >> x >> y;

		if (y > 4 && x > 4) {
			cout << " Так конь не ходит";
			continue;
		}
		if (y <= 3 && x <= 3) {
			cout << " Так конь не ходит";
			continue;
		}
		motionHors(x, y);
	} while (true);

}

