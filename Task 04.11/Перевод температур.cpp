#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    double C, F;
    cout << "������� ����������� � �������� �� ����������:" << "\n";
    cin >> F;
    C = 5 * (F-32) / 9;
    cout << "����������� � �������� �� �������: " << C;

    return 0;
}
