#include <windows.h>
#include <iostream>
#include <cmath>
#include <conio.h>

void WanderingStar(int x, int y, int N)
{
    HWND hwnd = GetConsoleWindow();
    HDC hdc = GetDC(hwnd); 
    
    int A = 3;

    for (int i = 0; i < N; i++)
    {
        SetPixel(hdc, x, y, RGB(200, 0, 250));
        x++;
        y += A;
    }

    for (int i = 0; i < N; i++)
    {
        SetPixel(hdc, x, y, RGB(200, 0, 250));
        x += A;
        y++;
    }

    for (int i = 0; i < N; i++)
    {
        SetPixel(hdc, x, y, RGB(200, 0, 250));
        x -= A;
        y++;
    }

    for (int i = 0; i < N; i++)
    {
        SetPixel(hdc, x, y, RGB(200, 0, 250));
        x--;
        y += A;
    }

    for (int i = 0; i < N; i++)
    {
        SetPixel(hdc, x, y, RGB(200, 0, 250));
        x--;
        y -= A;
    }

    for (int i = 0; i < N; i++)
    {
        SetPixel(hdc, x, y, RGB(200, 0, 250));
        x -= A;
        y--;
    }

    for (int i = 0; i < N; i++)
    {
        SetPixel(hdc, x, y, RGB(200, 0, 250));
        x += A;
        y--;
    }

    for (int i = 0; i < N; i++)
    {
        SetPixel(hdc, x, y, RGB(200, 0, 250));
        x++;
        y -= A;
    }
}

void GetKEY()
{
    bool KEY[256];
    int i = 0;
    while (i < 256)
    {
        if (GetAsyncKeyState(i)) KEY[i] = 1; else KEY[i] = 0;
        i++;
    }
}

void Rectangle()
{
    HWND hwnd = GetConsoleWindow();
    HDC hdc = GetDC(hwnd);

    RECT r; //��������� ��������� ��������� RECT - ���������� ��������������.
    r.left = 0; //����� ������� ����
    r.top = 0;
    r.right = 1000; //������ ������
    r.bottom = 1000;
    //��������� �������������
    FillRect(hdc, &r, (HBRUSH)CreateSolidBrush(RGB(0, 0, 0)));
}