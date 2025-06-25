#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <windows.h> // Для изменения кодировки консоли

using namespace std;

// Структура для хранения сведений о каждой игрушке
struct ToyData {
    string name;       // Название игрушки
    double price;      // Цена в рублях
    int ageFrom;       // Минимальный рекомендованный возраст
    int ageTo;         // Максимальный рекомендованный возраст
};

// Функция для ввода данных
void enter() {
    ofstream fout("Assort.txt");   // Открываем файл для записи

    int n;
    cout << "Введите количество записей: ";
    cin >> n;

    ToyData* arr = new ToyData[n]; // Динамически выделяем память под массив структур

    for (int i = 0; i < n; i++) {  // Заполняем каждую запись вручную
        cout << "Запись " << i + 1 << endl;

        cout << " Название игрушки: ";
        cin.ignore();              // Убираем символ новой строки после предыдущего ввода числа
        getline(cin, arr[i].name); // Читаем строку целиком

        cout << " Цена в рублях: ";
        cin >> arr[i].price;

        cout << " Возраст от: ";
        cin >> arr[i].ageFrom;

        cout << " Возраст до: ";
        cin >> arr[i].ageTo;

        fout << arr[i].name << " " << arr[i].price << " "
            << arr[i].ageFrom << " " << arr[i].ageTo << endl;
    }

    fout.close();                  // Закрываем файл
    delete[] arr;                 // Освобождаем память
}

// Функция для поиска подходящей игрушки для ребенка трех лет
void search() {
    ifstream fin("Assort.txt");     // Открываем файл для чтения
    string name;
    double price;
    int ageFrom, ageTo;

    bool found = false;           // Флаг наличия подходящего товара
    cout << "Подходящие игрушки для ребенка трех лет (кроме мячей):" << endl;

    while (fin >> name >> price >> ageFrom >> ageTo) {
        if ((ageFrom <= 3 && ageTo >= 3) && name.find("мяч") == string::npos) {
            found = true;
            cout << "Название: " << name << ", Цена: " << price << " рублей" << endl;
        }
    }

    if (!found)
        cout << "Нет подходящих игрушек." << endl;

    fin.close();                   // Закрываем файл
}

// Сохранение найденных результатов в отдельный файл
void saveResults(vector<string> results) {
    ofstream fout("results.txt");
    for (const auto& result : results) {
        fout << result << endl;
    }
    fout.close();
}

// Основная программа с интерфейсом выбора действий
int main() {
    SetConsoleCP(1251);          // Устанавливаем правильную кодировку для вывода кириллицы
    SetConsoleOutputCP(1251);

    int choice;
    do {
        cout << "\nМеню:\n";
        cout << "1. Ввод данных\n";
        cout << "2. Поиск игрушек для ребенка трех лет\n";
        cout << "3. Выход\n";
        cout << "Введите номер пункта: ";
        cin >> choice;

        switch (choice) {
        case 1:
            enter();
            break;

        case 2:
            search();
            break;

        case 3:
            cout << "Выход из программы.\n";
            break;

        default:
            cout << "Неверный выбор, повторите попытку.\n";
        }
    } while (choice != 3);

    return 0;
}