#include <iostream>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    vector <char> a; // Массив типа вектор для хранения вводимых символов
    char x; // Вводимый символ

    cout << "Введите набор символов:" << "\n";
    for (int i=0; i < 5; i++){
        cin >> x; //Ввод символов
        a.push_back(x);
    }

    cout << "Набор введенных символов, выведенный в обратном порядке: " << "\n";
    for (int i=4; i >= 0; i--){
        cout << a[i] << " "; //Вывод символов
    }

    return 0;
}
