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

    // ������� ���������� �������
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

    // ����� ������� (�� ����) ��� ������� 3 ���
    bool found = false;
    fout << "������� (����� ����) ��� ������� 3 ���:" << endl;
    cout << "������� (����� ����) ��� ������� 3 ���:" << endl;

    for (int i = 0; i < count; i++)
    {
        if (toys[i].name != "���" && toys[i].min_age <= 3 && toys[i].max_age >= 3)
        {
            cout << "��������: " << toys[i].name << ", ����: " << toys[i].price
                << " ���., �������: " << toys[i].min_age << "-" << toys[i].max_age << " ���" << endl;
            fout << "��������: " << toys[i].name << ", ����: " << toys[i].price
                << " ���., �������: " << toys[i].min_age << "-" << toys[i].max_age << " ���" << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "���������� ������� �� �������." << endl;
        fout << "���������� ������� �� �������." << endl;
    }

    fin.close();
    fout.close();
    delete[] toys;
}