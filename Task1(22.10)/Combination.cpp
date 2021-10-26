#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int x,x1,x2,x3;
    setlocale(LC_ALL, "Rus");
    cout << "������� ����������� �����, ���������� ��������� �����:" << "\n";
    cin >> x; // �������� ������������� �����
    vector <int> a;

    x3 = x % 10; //��������� ����� ����� X
    x2 = (x / 10) % 10; // ����������� ����� ����� X
    x1 = x / 100; // ������ ����� ����� X


    while ((x < 100) || (x > 999) || (x1 == x2) || (x2 == x3) || (x3 == x1))  {
        cout << "��������� ����� �� ����������� ��� �������� ������������� �����. ��������� ����:" << "\n";
        cin >> x;
        x3 = x % 10;
        x2 = (x / 10) % 10;
        x1 = x / 100;
    }

    cout << x1 << x2 << x3 << "\n";
    swap(x2,x3);
    cout << x1 << x2 << x3 << "\n";
    swap(x1,x2);
    cout << x1 << x2 << x3 << "\n";
    swap(x1,x3);
    cout << x1 << x2 << x3 << "\n";
    swap(x2,x3);
    cout << x1 << x2 << x3 << "\n";
    swap(x1,x2);
    cout << x1 << x2 << x3 << "\n";

    a.push_back(x1);
    a.push_back(x2); // ���� ���� ����� � ������
    a.push_back(x3);

    sort(a.begin(), a.end()); // ���������� �� �����������

    cout << "������������ �����������, ������������ �� �����:" << "\n";
    for (int i = 2; i >= 0; --i){
            cout << a[i];    // �������� ����� �������
    }

    return 0;
}
