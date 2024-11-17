#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    int unit;
    double M, res;
    char repeat = 'y';

    do {
        cout << "Введіть номер одиниці виміру (1 – кілограм, 2 – міліграм, 3 – грам, 4 – тонна, 5 – центнер): ";
        cin >> unit;
        cout << "Введіть масу: ";
        cin >> M;

        switch (unit) {
        case 1:
            res = M;
            break;
        case 2:
            res = M / 1000000;
            break;
        case 3:
            res = M / 1000;
            break;
        case 4:
            res = M * 1000;
            break;
        case 5:
            res = M * 100;
            break;
        default:
            cout << "Неправильний номер одиниці виміру. Спробуйте ще раз." << endl;
            continue;
        }

        cout << "Маса в кілограмах: " << res << " кг" << endl;

        cout << "Бажаєте виконати ще одне обчислення? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}