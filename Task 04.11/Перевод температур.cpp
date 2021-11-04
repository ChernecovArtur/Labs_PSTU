#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    double C, F;
    cout << "Введите температуру в градусах по Фаренгейту:" << "\n";
    cin >> F;
    C = 5 * (F-32) / 9;
    cout << "Тепмература в градусах по Цельцию: " << C;

    return 0;
}
