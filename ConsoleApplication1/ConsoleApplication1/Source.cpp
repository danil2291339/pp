#include "module_1.h"
struct Toy
{
    string name;
    double price;
    int min_age;
    int max_age;
};

void enter()
{
    ofstream fout("Assort.txt");
    int n;
    cout << "Введите количество игрушек: ";
    cin >> n;
    Toy* toys = new Toy[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Игрушка " << i + 1 << endl;
        cout << " Название: ";
        cin >> toys[i].name;
        cout << " Цена (руб): ";
        cin >> toys[i].price;
        cout << " Минимальный возраст: ";
        cin >> toys[i].min_age;
        cout << " Максимальный возраст: ";
        cin >> toys[i].max_age;

        fout << toys[i].name << " " << toys[i].price << " "
            << toys[i].min_age << " " << toys[i].max_age << endl;
    }
    fout.close();
    delete[] toys;
}