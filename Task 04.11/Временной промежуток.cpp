#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    int chasn, minn, sekn; // ����������� ������ ���������� �������
    int chask, mink, sekk; // ����������� ����� ���������� �������
    int chasp, minp, sekp; // ����������� ����� ���������� ����������
    int T; // ����� ���������� ���������� � ��������

    cout << "������� ����� ������ ���������� �������" << "\n"; // ���� ������ ���������� ����������
    cout << "����: " << "\n";
    cin >> chasn;
    cout << "������: " << "\n";
    cin >> minn;
    cout << "�������: " << "\n";
    cin >> sekn;

    cout << "������� ����� ����� ���������� �������" << "\n"; // ���� ������ ���������� ����������
    cout << "����: " << "\n";
    cin >> chask;
    cout << "������: " << "\n";
    cin >> mink;
    cout << "�������: " << "\n";
    cin >> sekk;

    T = (chask * 3600 + mink * 60 + sekk) - (chasn * 3600 + minn * 60 + sekn); // ����������� ����� ��������� ���������� � ��������
    chasp = ( T / 3600);
    minp = ( T % 3600) / 60;
    sekp = ( T % 3600) % 60;

    cout << "����� ���������� ����������:" << "\n"; // ����� ����� ���������� ����������


    cout << "����: " << "\n";
    cout << chasp << "\n";
    cout << "������: " << "\n";
    cout << minp << "\n";
    cout << "�������: " << "\n";
    cout << sekp << "\n";

    return 0;
}
