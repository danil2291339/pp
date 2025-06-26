#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include "module_1.h"
#include "module_2.h"
#include "module_3.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int choice = 0;
    while (choice != 4)
    {
        cout << "\nМеню:\n";
        cout << "1 - Ввод данных об игрушках\n";
        cout << "2 - Поиск игрушки (не мяча) для ребенка 3 лет\n";
        cout << "3 - Сохранение результата\n";
        cout << "4 - Выход\n";
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            enter();
            break;
        case 2:
            find();
            break;
        case 3:
            save();
            break;
        case 4:
            cout << "Выход из программы..." << endl;
            break;
        default:
            cout << "Неверный выбор! Попробуйте снова." << endl;
            break;
        }
    }

    system("pause");
    return 0;
}