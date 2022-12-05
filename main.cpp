// CMakeProject1.cpp: определяет точку входа для приложения.
//

#include <iostream>

using namespace std;


int main() {
    int a;
    int b;
    cout << "Введите a:";
    cin >> a;
    cout << "Введите b:";
    cin >> b;

    int s;
    int p;

    s = a * b;
    p = 2 * (a + b);
    cout << "Площадь" << s << endl;
    cout << "Периметр" << p << endl;
    return 0;
}
