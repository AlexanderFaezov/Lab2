#include <iostream>
using namespace std;
int main()
{
    int a, b, c = 0, n, max, num = 0 , i = 1;
    setlocale(LC_ALL, "ru");
    cout << "Введите количество элементов: ";
    cin >> n;
    cout << "Введите  первый элемент последовательности: ";
    cin >> a;
    max = a;
    while (i < n)
    {
        cout << "Введите следующий элемент: ";
        cin >> b;
        i += 1;
        if (b > max)
        {
            max = b;
            num = i;
        }
        else
        {
            if (b == max)
            {
                c += 1;
            }
        }
    }
    cout << endl << endl << endl;
    cout << "Максимальный элемент: " << max << endl;
    cout << "Номер максимального элемента: " << num << endl;
    cout << "Количество элементов, совпадающие с максимальным: " << c << endl;
    return 0;
}