
#include <iostream>
#include <cstdlib>

using namespace std;

void repasit();
void EventRAIN();

int reputation = 10;
int money = 50;
int food = 10;
int day = 0;

int main() {
    setlocale(LC_ALL, "Russian");


    int f = {};

    cout << "��� ������ ����� ����\n����� �������\n1.����� ����\n2.� ������\n";
    cin >> f;

    if (f==1)
    {
        cout << "����������� ��� ���� ������ �� ����� ����\n";
        repasit();
    }
    if (f == 2) {
        cout << "��� �� ����� ��� ����� ��������� ���� !\n";
        repasit();
    }
    else
    {
        cout << "������ ����� ��� ���\n";
        main();
    }
    return 0;
}

void repasit() {

    cout << "����������� ���� ������ ��������� " << day << "\n";
    ++day;

    cout << "���� ��������� - " << reputation << "\n";
    cout << "����� ������ - " << money << "\n";
    cout << "��� � ������ - " << food <<"\n";
    
    if (food <= 0 ){ cout << "�� ��������� � ��� � ������� ��� ���� ��� �� ���� ������� �� ����\n"; }
 
    if (money <= 0){ cout << "�� ��������� � ��� � ������� ��� ��� ��� ������ ����� �����������\n"; }

    if (reputation <= 0){ cout << "�� ��������� � ��� � ������ ��������� ��� ������ ��� ��������\n"; }
    

    int randomEvent = 1 + rand() % 5;

    if (randomEvent == 1) { EventRAIN(); }

    if (randomEvent == 2) { cout << "g"; }

    if (randomEvent == 3) { cout << "g"; }

    if (randomEvent == 4) { cout << "g"; }

    if (randomEvent == 5) { cout << "g"; }

}

void EventRAIN() {
    cout << "������� ����� ������� ������ � ������ ����� ������\n����������� ��� �� ��� �� ������ �� ������";
    food = food + 10;
    repasit();
}

void Event() {
    cout << "������� ����� ������� ������ � ������ ����� ������\n����������� ��� �� ��� �� ������ �� ������";
    food = food + 10;
    repasit();
}

void EventR() {
    cout << "������� ����� ������� ������ � ������ ����� ������\n����������� ��� �� ��� �� ������ �� ������";
    food = food + 10;
    repasit();
}

void EventRA() {
    cout << "������� ����� ������� ������ � ������ ����� ������\n����������� ��� �� ��� �� ������ �� ������";
    food = food + 10;
    repasit();
}

void EventRAI() {
    cout << "������� ����� ������� ������ � ������ ����� ������\n����������� ��� �� ��� �� ������ �� ������";
    food = food + 10;
    repasit();
}