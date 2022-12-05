// CMakeProject1.cpp: определяет точку входа для приложения.
//

#include <iostream>

using namespace std;


int main() {
	int n, k, i=0;
	cout << "write n:";
	cin >> n;	cout << endl;
	cout << "write k:";
	cin >> k;   cout << endl;
	while (n>=k)
	{
		n -= k;
		i++;
	}
	cout << "4astnoe "<< i << " ostatok " << n;
	return 0;
}	