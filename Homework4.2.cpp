#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");

    int ms[7];

    for (int i = 0; i < 7; i++)
    {
        cout << "Введите число m[" << i + 1 << "]: " << endl;
        cin >> ms[i];
    }

    for (int i = 0; i < 7; i++)
    {
        cout << ms[i] << " ";
    }
    cout << endl << endl;

    cout << "Введите количество элементов в массиве: " << endl;
    int j = 0;
    cin >> j;
    int* mss = new int[j];

    for (int i = 0; i < j; i++)
    {
        cout << "Введите число m[" << i + 1 << "]: " << endl;
        cin >> mss[i];
    }

    for (int i = 0; i < j; i++)
    {
        cout << mss[i] << " ";
    }
    cout << endl;
}