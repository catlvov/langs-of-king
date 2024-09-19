
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

    cout << "это начало нашей игры\nЗЕМЛИ КОРОЛЕЙ\n1.старт игры\n2.о авторе\n";
    cin >> f;

    if (f==1)
    {
        cout << "приветсвуем вас нашь король на вашем пути\n";
        repasit();
    }
    if (f == 2) {
        cout << "вам не нужно это знать начнитеже игру !\n";
        repasit();
    }
    else
    {
        cout << "видите число еще раз\n";
        main();
    }
    return 0;
}

void repasit() {

    cout << "сегодняшней день вашего правления " << day << "\n";
    ++day;

    cout << "ваша репутация - " << reputation << "\n";
    cout << "козна города - " << money << "\n";
    cout << "еда в городе - " << food <<"\n";
    
    if (food <= 0 ){ cout << "вы проиграли в бою с голодом как жаль что вы были съедены за живо\n"; }
 
    if (money <= 0){ cout << "вы проиграли в бою с нищетой где иза вас умерло целое королевство\n"; }

    if (reputation <= 0){ cout << "вы проиграли в бою с вашими поданными что пришли вас свергать\n"; }
    

    int randomEvent = 1 + rand() % 5;

    if (randomEvent == 1) { EventRAIN(); }

    if (randomEvent == 2) { cout << "g"; }

    if (randomEvent == 3) { cout << "g"; }

    if (randomEvent == 4) { cout << "g"; }

    if (randomEvent == 5) { cout << "g"; }

}

void EventRAIN() {
    cout << "сегодня пошел сильный дожьдь и принес много урожая\nпоздравляем вас вы еще не здохли от голода";
    food = food + 10;
    repasit();
}

void Event() {
    cout << "сегодня пошел сильный дожьдь и принес много урожая\nпоздравляем вас вы еще не здохли от голода";
    food = food + 10;
    repasit();
}

void EventR() {
    cout << "сегодня пошел сильный дожьдь и принес много урожая\nпоздравляем вас вы еще не здохли от голода";
    food = food + 10;
    repasit();
}

void EventRA() {
    cout << "сегодня пошел сильный дожьдь и принес много урожая\nпоздравляем вас вы еще не здохли от голода";
    food = food + 10;
    repasit();
}

void EventRAI() {
    cout << "сегодня пошел сильный дожьдь и принес много урожая\nпоздравляем вас вы еще не здохли от голода";
    food = food + 10;
    repasit();
}