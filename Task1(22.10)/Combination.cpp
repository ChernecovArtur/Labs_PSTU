#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int x,x1,x2,x3;
    setlocale(LC_ALL, "Rus");
    cout << "Введите трехзначное число, содержащее различные цифры:" << "\n";
    cin >> x; // Введеное пользователем число
    vector <int> a;

    x3 = x % 10; //Последняя цифра числа X
    x2 = (x / 10) % 10; // Центральная цифра числа X
    x1 = x / 100; // Первая цифра числа X


    while ((x < 100) || (x > 999) || (x1 == x2) || (x2 == x3) || (x3 == x1))  {
        cout << "Введенное число не трехзначное или содержит повторяющиеся цифры. Повторите ввод:" << "\n";
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
    a.push_back(x2); // Ввод цифр числа в вектор
    a.push_back(x3);

    sort(a.begin(), a.end()); // Сортировка по возрастанию

    cout << "Максимальное комбинцация, составленная из числа:" << "\n";
    for (int i = 2; i >= 0; --i){
            cout << a[i];    // Обратный вывод вектора
    }

    return 0;
}
