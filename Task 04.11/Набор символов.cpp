#include <iostream>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    vector <char> a; // ������ ���� ������ ��� �������� �������� ��������
    char x; // �������� ������

    cout << "������� ����� ��������:" << "\n";
    for (int i=0; i < 5; i++){
        cin >> x; //���� ��������
        a.push_back(x);
    }

    cout << "����� ��������� ��������, ���������� � �������� �������: " << "\n";
    for (int i=4; i >= 0; i--){
        cout << a[i] << " "; //����� ��������
    }

    return 0;
}
