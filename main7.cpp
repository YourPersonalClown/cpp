// CMakeProject1.cpp: определяет точку входа для приложения.
//

#include <iostream>

using namespace std;


int main() {
	int a[10][10], n, m, k, sum=0, mult=1;
    cout << "write m:"; cin >> m;
    cout << "write n:"; cin >> n;
    cout << "write k:"; cin >> k;
    cout << endl << "zapolnite masiv" <<endl ;
    for (int i = 0; i < m; ++i) {
        for (int r = 0; r < n; ++r) {
            cin >> a[i][r]; cout << endl;
        }
    }
    for (int i = 0; i < m; ++i) {
            sum = sum+a[i][k];
            mult *= a[i][k];
        }
    cout <<  "sum:" << sum << "umnojenie:" << mult << endl;
    

}	