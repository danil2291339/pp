#include "module_2.h"
struct Toy
{
    string name;
    double price;
    int min_age;
    int max_age;
};

void find()
{
    ifstream fin("Assort.txt");
    ofstream fout("intermediate.txt");

    // Подсчет количества записей
    int count = 0;
    string temp;
    while (getline(fin, temp))
    {
        count++;
    }
    fin.clear();
    fin.seekg(0);

    Toy* toys = new Toy[count];
    for (int i = 0; i < count; i++)
    {
        fin >> toys[i].name >> toys[i].price >> toys[i].min_age >> toys[i].max_age;
    }

    // Поиск игрушки (не мяча) для ребенка 3 лет
    bool found = false;
    fout << "Игрушки (кроме мяча) для ребенка 3 лет:" << endl;
    cout << "Игрушки (кроме мяча) для ребенка 3 лет:" << endl;

    for (int i = 0; i < count; i++)
    {
        if (toys[i].name != "мяч" && toys[i].min_age <= 3 && toys[i].max_age >= 3)
        {
            cout << "Название: " << toys[i].name << ", Цена: " << toys[i].price
                << " руб., Возраст: " << toys[i].min_age << "-" << toys[i].max_age << " лет" << endl;
            fout << "Название: " << toys[i].name << ", Цена: " << toys[i].price
                << " руб., Возраст: " << toys[i].min_age << "-" << toys[i].max_age << " лет" << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "Подходящих игрушек не найдено." << endl;
        fout << "Подходящих игрушек не найдено." << endl;
    }

    fin.close();
    fout.close();
    delete[] toys;
}