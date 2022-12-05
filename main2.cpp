// CMakeProject1.cpp: определяет точку входа для приложения.
//

#include <iostream>

using namespace std;


int main() {
    int weight;

    cout << "Вес файла:";
    cin >> weight;
    int weight_kb = weight / 1024 ;
    cout << "Вес в килобайтах: " << weight_kb << endl;
}
 