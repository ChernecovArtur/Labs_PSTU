#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int x1,x2;
    cout << "������� ������ �����, ������� ���������� �����������: " << "\n";
    cin >> x1;

    cout << "������� ������ �����, ������� ���������� �����������: " << "\n";
    cin >> x2;

    cout << "��������� ������������: " << x1*x2;

    return 0;
}
