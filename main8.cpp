// CMakeProject1.cpp: определяет точку входа для приложения.
//

#include <iostream>

using namespace std;


int main() {
	int PPK;
	float res;
	cout << "price per kg" << endl;
	cin >> PPK;

	for (float x = 1.2; x < 2.1; x=x+0.1) {
		res = PPK * x;
		cout << "sweets price: " << res << endl;
	};
	return 0;
}	