#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int x1,x2;
    cout << "¬ведите первое число, которое необходимо перемножить: " << "\n";
    cin >> x1;

    cout << "¬ведите второе число, которое необходимо перемножить: " << "\n";
    cin >> x2;

    cout << "–езультат перемножени€: " << x1*x2;

    return 0;
}
