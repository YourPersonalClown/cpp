// CMakeProject1.cpp: определяет точку входа для приложения.
//

#include <iostream>

using namespace std;


int main() {
	int a[10],n;
    cout << "write n:"; cin >> n;
    cout << endl << "zapolnite masiv" <<endl ;
    for (int i = 0; i < n; ++i) {
        cin >> a[i]; cout << endl;
    }
    for (int i = 0; i < n; i += 2) {
        cout << a[i] << endl;
    }

    for (int i = n - (n % 2) - 1; i >= 1; i -= 2) {
        cout << a[i] << endl;
    }
}	