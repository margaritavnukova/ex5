//На экране нарисовать изображение четырехконечной звезды. 
//Размеры звезды должны изменяться (увеличиваться или уменьшаться) 
//на 10 % от предыдущего размера при нажатии клавиш «стрелка вверх» 
//или «стрелка-вниз», но увеличение не должно приводить 
//к выходу рисунка за границы экрана.

#include <windows.h>
#include <iostream>
#include <cmath>
#include <conio.h>
#include "ex5.h"
using namespace std;

HWND hwnd = GetConsoleWindow();
HDC hdc = GetDC(hwnd);

bool KEY[256];

int main()
{
    int x = 400, y = 100, N = 30;

    WanderingStar(x, y, N);
    ReleaseDC(hwnd, hdc);

    while (true)
    {
        if (_kbhit()) // слушатель нажатия на клаву
        {
            cout << "do it!" << endl;
            _getch();
            int c = _getch();

            cout << "c = " << c << endl;

            if (c == 72)
            {
                cout << "UP" << endl;
                N = N * 1.1;
                Rectangle();
                WanderingStar(x, y, N);
            }

            if (c == 80)
            {
                cout << "DOWN" << endl;
                N = N * 0.9;
                Rectangle();
                WanderingStar(x, y, N);
            }
        }
    }

    ReleaseDC(hwnd, hdc);
    std::cin.ignore();
    return 0;
}

