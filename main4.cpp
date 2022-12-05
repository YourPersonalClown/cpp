// CMakeProject1.cpp: определяет точку входа для приложения.
//

#include <iostream>

using namespace std;


int main() {
	int number;
	cout << "write number";
	cin >> number;
	if (number > 0) {
		number++;
	}
	if (number < 0) {
		number = number - 2;
	}
	if (number == 0) {
		number = 10;
	}

	cout << number;
}	
 