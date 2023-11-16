// prokofev.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	string zzz;
	string zxc;

	cout << "Введите строку для архивации: ";
	cin >> zzz;

	for (size_t i = 0; i < zzz.length();) {
		char currentChar = zzz[i];
		size_t repeatCount = 1;
		size_t j = i + 1;

		while (j < zzz.length() && currentChar == zzz[j]) {
			repeatCount++;
			j++;
		}

		if (repeatCount > 1) {
			zxc += currentChar + to_string(repeatCount);
			i += repeatCount;
		}
		else {
			zxc += currentChar;
			i++;
		}
	}

	cout << zxc << endl;

	zzz = "";
	zxc = "";

	cout << zxc << endl;

	return 0;
}