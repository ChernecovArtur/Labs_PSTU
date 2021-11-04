#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    int chasn, minn, sekn; // Перееменные начала временного отрезка
    int chask, mink, sekk; // Перееменные конца временного отрезка
    int chasp, minp, sekp; // Перееменные длины временного промежутка
    int T; // длина временного промежутка в секундах

    cout << "Введите время начало временного отрезка" << "\n"; // Ввод начала временного промежутка
    cout << "Часы: " << "\n";
    cin >> chasn;
    cout << "Минуты: " << "\n";
    cin >> minn;
    cout << "Секунды: " << "\n";
    cin >> sekn;

    cout << "Введите время конца временного отрезка" << "\n"; // Ввод начала временного промежутка
    cout << "Часы: " << "\n";
    cin >> chask;
    cout << "Минуты: " << "\n";
    cin >> mink;
    cout << "Секунды: " << "\n";
    cin >> sekk;

    T = (chask * 3600 + mink * 60 + sekk) - (chasn * 3600 + minn * 60 + sekn); // Составление длины временнго промежутка в секундах
    chasp = ( T / 3600);
    minp = ( T % 3600) / 60;
    sekp = ( T % 3600) % 60;

    cout << "Длина временного промежутка:" << "\n"; // Вывод длины временного промежутка


    cout << "Часы: " << "\n";
    cout << chasp << "\n";
    cout << "Минуты: " << "\n";
    cout << minp << "\n";
    cout << "Секунды: " << "\n";
    cout << sekp << "\n";

    return 0;
}
