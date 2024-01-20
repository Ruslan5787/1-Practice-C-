#include <iostream>
#include <string>
#include <format>
using namespace std;

int getSum() {
    int a;
    int b;

    cout << "Введите первое число(a): ";
    cin >> a;

    cout << "Введите второе число(b): ";
    cin >> b;

    return a + b;
}

string getSumAndMulti() {
    int naturalNumber;
    cout << "Введите натуральное число: ";
    cin >> naturalNumber;

    string strNaturalNumber = to_string(naturalNumber);

    int sum = 0;
    int multi = 1;

    for (size_t i = 0; i < strNaturalNumber.size(); i++)
    {
        int digit = strNaturalNumber[i] - '0';

        sum += digit;
        multi *= digit;
    }

    string sumStr = to_string(sum);
    string multiStr = to_string(multi);

    return "Сумма: " + sumStr + "\nПроизведение: " + multiStr;
}

int main()
{
    setlocale(LC_ALL, "rus");

    // Задача 1
    cout << "Сумма: " << getSum() << "\n\n";

    // Задача 2
    cout << getSumAndMulti();
}
