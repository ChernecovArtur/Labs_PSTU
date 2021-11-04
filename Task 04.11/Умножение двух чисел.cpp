#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int x1,x2;
    cout << "Введите первое число, которое необходимо перемножить: " << "\n";
    cin >> x1;

    cout << "Введите второе число, которое необходимо перемножить: " << "\n";
    cin >> x2;

    cout << "Результат перемножения: " << x1*x2;

    return 0;
}
