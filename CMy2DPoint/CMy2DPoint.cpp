/* ������������� �.�. ���-142, �������� ������, ������� 11(�) */

/****************************************************************************
* �������:
* 1. �������� ����� CMy2DPoint, ����������� ����� �� ���������.
* 2. �������� ����� CMy2DObject�������������, ����������� �������������� ������,
* ��������������� �������� �������.
* 3. ������������������ ����������������� ������������� ������� � ������� 
* ��������� ���������� ���������.
*****************************************************************************/

#include "stdafx.h"
#include "My2DPoint.h"
#include "My2DObjectB11.h"
#include <iostream>
#include <iomanip>
#include <string>

#define _USE_MATH_DEFINES
#define DEBUG 1
#include <math.h>

using namespace std;

int main() {
    int flag = 1;
    setlocale(LC_ALL, "rus");
    setlocale(LC_NUMERIC, "eng");

    CMy2DPoint my_center, point;
    CMy2DObjectB11 figure, new_figure;

    cout << setfill('*') << setw(80) << " " << endl;
    cout << "������������� ������, ��� - 142\n" << endl;
    cout << setfill('*') << setw(80) << " " << endl;
    cout << "������� � 11 (B)\n" << endl;
    cout << setfill('*') << setw(80) << " " << endl;
    cout << "�������:" << endl;
    cout << "1. �������� ����� CMy2DPoint, ����������� ����� �� ���������.\n"
        "2. �������� ����� CMy2DObjectB11, ����������� �������������� ������,\n"
        "��������������� �������� �������.\n"
        "3. ������������������ ����������������� ������������� ������� � �������\n"
        "��������� ���������� ���������." << endl;
    cout << setfill('*') << setw(80) << " " << endl;
#if DEBUG
    figure.SetA(6);
    figure.SetA1(3);
    figure.SetA2(2);
    figure.SetA3(1);
    cout << "A = " << figure.GetA() << endl;
    cout << "A1 = " << figure.GetA1() << endl;
    cout << "A2 = " << figure.GetA2() << endl;
    cout << "A3 = " << figure.GetA3() << endl;
    cout << "\n������ � ������� � �����(0,0)" << endl << endl;
    cout << "(-2.5, 2.5): ������ ���� false - " << (figure.IsInside(-2.5, 2.5) ? "true" : "false") << endl;
    cout << "(1, 1):      ������ ���� false - " << (figure.IsInside(1, 1) ? "true" : "false") << endl;
    cout << "(-2.7, 2.7): ������ ���� false - " << (figure.IsInside(-2.7, -2.7) ? "true" : "false") << endl;
    cout << "(-2, -2):    ������ ���� true - " << (figure.IsInside(-2, -2) ? "true" : "false") << endl;
    cout << "(1, 2):      ������ ���� true - " << (figure.IsInside(1, 2) ? "true" : "false") << endl;
    cout << "(-2.2, 1.2): ������ ���� true - " << (figure.IsInside(-2.2, 1.2) ? "true" : "false") << endl;
    cout << "(0, 0):      ������ ���� true - " << (figure.IsInside(0, 0) ? "true" : "false") << endl;

    cout << setfill('_') << setw(80) << " " << endl;
    my_center.SetX(2);
    my_center.SetY(1);
    figure.SetCenter(my_center);
    cout << endl;
    cout << "������ � ������� � �����(2,1)" << endl << endl;
    cout << "(-1, -2):    ������ ���� false - " << (figure.IsInside(-1, -2) ? "true" : "false") << endl;
    cout << "(-1, 5):     ������ ���� false - " << (figure.IsInside(-1, 5) ? "true" : "false") << endl;
    cout << "(5, 1):      ������ ���� false - " << (figure.IsInside(5, 1) ? "true" : "false") << endl;
                             
    cout << "(0.5, 4):    ������ ���� false - " << (figure.IsInside(0.5, 4) ? "true" : "false") << endl;
    cout << "(5, 0):      ������ ���� false - " << (figure.IsInside(5, 0) ? "true" : "false") << endl;
    cout << "(1.5, 2.5):  ������ ���� true - " << (figure.IsInside(1.5, 2.5) ? "true" : "false") << endl;
    cout << "(-0.5, -0.7):������ ���� true - " << (figure.IsInside(-0.5, -0.7) ? "true" : "false") << endl;
    cout << "(3, 3):      ������ ���� true - " << (figure.IsInside(3, 3) ? "true" : "false") << endl;
    cout << "(2, -1):     ������ ���� true - " << (figure.IsInside(2, -1) ? "true" : "false") << endl;

    cout << setfill('_') << setw(80) << " " << endl;
    figure.Rotate(M_PI / 2);
    cout << endl;
    cout << "������� �� pi/2" << endl << endl;

    cout << "(0, 2.5):    ������ ���� true - " << (figure.IsInside(0, 2.5) ? "true" : "false") << endl;
    cout << "(2.5, 0):    ������ ���� true - " << (figure.IsInside(2.5, 0) ? "true" : "false") << endl;
    cout << "(2 ,2):      ������ ���� false - " << (figure.IsInside(2, 2) ? "true" : "false") << endl;
    cout << "(-0.5, -1.5):������ ���� false - " << (figure.IsInside(-0.5, -1.5) ? "true" : "false") << endl;

    cout << setfill('_') << setw(80) << " " << endl;
    cout << "������� ����� ������ � ������������:" << endl;
    new_figure.SetA(3);
    new_figure.SetA1(1);
    new_figure.SetA2(2);
    new_figure.SetA3(0.99);

    cout << "A = " << new_figure.GetA() << endl;
    cout << "A1 = " << new_figure.GetA1() << endl;
    cout << "A2 = " << new_figure.GetA2() << endl;
    cout << "A3 = " << new_figure.GetA3() << endl;
    cout << endl;

    cout << "(-0.5, 1): ������ ���� false - " << (new_figure.IsInside(-0.5, 1) ? "true" : "false") << endl;
    cout << setfill('_') << setw(80) << " " << endl;
    cout << "������� �� pi/4" << endl;
    new_figure.Rotate(M_PI / 4);
    cout << "(-0.5, 1) ������ ���� true - " << (new_figure.IsInside(-0.5, 1) ? "true" : "false") << endl;
    cout << setfill('_') << setw(80) << " " << endl;
    cout << endl << endl;
#else
    int ans;
    double x, y, angle;
    cout << "������� �: ";
    cin >> x;
    figure.SetA(x);
    cout << "������� �1: ";
    cin >> x;
    figure.SetA1(x);
    cout << "������� �2: ";
    cin >> x;
    figure.SetA2(x);
    cout << "������� �3: ";
    cin >> x;
    figure.SetA3(x);
    cout << "������� ���������� x ������: ";
    cin >> x;
    my_center.SetX(x);
    cout << "������� ���������� y ������: ";
    cin >> y;
    my_center.SetY(y);
    figure.SetCenter(my_center);
    while (flag) {
        cout << "\n��� �� ������ �������?" << endl;
        cout << "1. ��������� ������.\n"
            "2. �������� ������ � ���������.\n"
            "3. ��������� ����� �� ���������.\n"
            "4. ������� � �����.\n";
        cout << "> ";
        cin >> ans;

        switch (ans) {
        case 1:
            cout << "������� ����: ";
            cin >> angle;
            figure.Rotate(angle);
            cout << endl;
            cout << "���� = " << figure.GetAngle() << endl;
            break;
        case 2:
            cout << "������� x1: ";
            cin >> x;
            cout << "������� y1: ";
            cin >> y;
            point.SetX(x);
            point.SetY(y);
            cout << "������� ����: ";
            cin >> angle;
            figure.Move(point, angle);
            cout << endl;
            cout << "����� ���������� ������: " << figure.GetCenter() << endl;
            cout << "����� ����: " << figure.GetAngle() << endl;
            break;
        case 3:
            cout << "������� ���������� x: ";
            cin >> x;
            cout << "������� ���������� y: ";
            cin >> y;
            point.SetX(x);
            point.SetY(y);
            cout << (figure.IsInside(point) ? "true" : "false") << endl;
            break;
        case 4:
            flag = 0;
            break;
        }
    }
#endif
    return 0;
}

