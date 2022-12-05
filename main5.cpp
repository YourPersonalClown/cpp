// CMakeProject1.cpp: определяет точку входа для приложения.
//

#include <iostream>

using namespace std;


int main() {
	int month;
	string season;
	cout << "wtite month"<< endl;
	cin >> month ;

	switch (month)
	{
	case  1:3; season = "winter";
		break;
	case 4:6; season = "spring";
		break;
	case 7:9; season = "summer";
		break;
	case 10:12; season = "autumn";
		break;
	}
	cout << season;
}	
 