/* Цырендылыкова Э.Ц. БПМ-142, Курсовая работа, вариант 11(Б) */

/****************************************************************************
* Задание:
* 1. Написать класс CMy2DPoint, описывающий точку на плоскости.
* 2. Написать класс CMy2DObjectНомерВарианта, описывающий геометрическую фигуру,
* соответствующую варианту задания.
* 3. Продемонстрировать работоспособность разработанных классов с помощью 
* небольшой консольной программы.
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
    cout << "Цырендылыкова Эржена, БПМ - 142\n" << endl;
    cout << setfill('*') << setw(80) << " " << endl;
    cout << "Вариант № 11 (B)\n" << endl;
    cout << setfill('*') << setw(80) << " " << endl;
    cout << "Задание:" << endl;
    cout << "1. Написать класс CMy2DPoint, описывающий точку на плоскости.\n"
        "2. Написать класс CMy2DObjectB11, описывающий геометрическую фигуру,\n"
        "соответствующую варианту задания.\n"
        "3. Продемонстрировать работоспособность разработанных классов с помощью\n"
        "небольшой консольной программы." << endl;
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
    cout << "\nФигура с центром в точке(0,0)" << endl << endl;
    cout << "(-2.5, 2.5): должно быть false - " << (figure.IsInside(-2.5, 2.5) ? "true" : "false") << endl;
    cout << "(1, 1):      должно быть false - " << (figure.IsInside(1, 1) ? "true" : "false") << endl;
    cout << "(-2.7, 2.7): должно быть false - " << (figure.IsInside(-2.7, -2.7) ? "true" : "false") << endl;
    cout << "(-2, -2):    должно быть true - " << (figure.IsInside(-2, -2) ? "true" : "false") << endl;
    cout << "(1, 2):      должно быть true - " << (figure.IsInside(1, 2) ? "true" : "false") << endl;
    cout << "(-2.2, 1.2): должно быть true - " << (figure.IsInside(-2.2, 1.2) ? "true" : "false") << endl;
    cout << "(0, 0):      должно быть true - " << (figure.IsInside(0, 0) ? "true" : "false") << endl;

    cout << setfill('_') << setw(80) << " " << endl;
    my_center.SetX(2);
    my_center.SetY(1);
    figure.SetCenter(my_center);
    cout << endl;
    cout << "Фигура с центром в точке(2,1)" << endl << endl;
    cout << "(-1, -2):    должно быть false - " << (figure.IsInside(-1, -2) ? "true" : "false") << endl;
    cout << "(-1, 5):     должно быть false - " << (figure.IsInside(-1, 5) ? "true" : "false") << endl;
    cout << "(5, 1):      должно быть false - " << (figure.IsInside(5, 1) ? "true" : "false") << endl;
                             
    cout << "(0.5, 4):    должно быть false - " << (figure.IsInside(0.5, 4) ? "true" : "false") << endl;
    cout << "(5, 0):      должно быть false - " << (figure.IsInside(5, 0) ? "true" : "false") << endl;
    cout << "(1.5, 2.5):  должно быть true - " << (figure.IsInside(1.5, 2.5) ? "true" : "false") << endl;
    cout << "(-0.5, -0.7):должно быть true - " << (figure.IsInside(-0.5, -0.7) ? "true" : "false") << endl;
    cout << "(3, 3):      должно быть true - " << (figure.IsInside(3, 3) ? "true" : "false") << endl;
    cout << "(2, -1):     должно быть true - " << (figure.IsInside(2, -1) ? "true" : "false") << endl;

    cout << setfill('_') << setw(80) << " " << endl;
    figure.Rotate(M_PI / 2);
    cout << endl;
    cout << "Поворот на pi/2" << endl << endl;

    cout << "(0, 2.5):    должно быть true - " << (figure.IsInside(0, 2.5) ? "true" : "false") << endl;
    cout << "(2.5, 0):    должно быть true - " << (figure.IsInside(2.5, 0) ? "true" : "false") << endl;
    cout << "(2 ,2):      должно быть false - " << (figure.IsInside(2, 2) ? "true" : "false") << endl;
    cout << "(-0.5, -1.5):должно быть false - " << (figure.IsInside(-0.5, -1.5) ? "true" : "false") << endl;

    cout << setfill('_') << setw(80) << " " << endl;
    cout << "Создаем новую фигуру с координатами:" << endl;
    new_figure.SetA(3);
    new_figure.SetA1(1);
    new_figure.SetA2(2);
    new_figure.SetA3(0.99);

    cout << "A = " << new_figure.GetA() << endl;
    cout << "A1 = " << new_figure.GetA1() << endl;
    cout << "A2 = " << new_figure.GetA2() << endl;
    cout << "A3 = " << new_figure.GetA3() << endl;
    cout << endl;

    cout << "(-0.5, 1): должно быть false - " << (new_figure.IsInside(-0.5, 1) ? "true" : "false") << endl;
    cout << setfill('_') << setw(80) << " " << endl;
    cout << "Поворот на pi/4" << endl;
    new_figure.Rotate(M_PI / 4);
    cout << "(-0.5, 1) должно быть true - " << (new_figure.IsInside(-0.5, 1) ? "true" : "false") << endl;
    cout << setfill('_') << setw(80) << " " << endl;
    cout << endl << endl;
#else
    int ans;
    double x, y, angle;
    cout << "Введите А: ";
    cin >> x;
    figure.SetA(x);
    cout << "Введите А1: ";
    cin >> x;
    figure.SetA1(x);
    cout << "Введите А2: ";
    cin >> x;
    figure.SetA2(x);
    cout << "Введите А3: ";
    cin >> x;
    figure.SetA3(x);
    cout << "Введите координату x центра: ";
    cin >> x;
    my_center.SetX(x);
    cout << "Введите координату y центра: ";
    cin >> y;
    my_center.SetY(y);
    figure.SetCenter(my_center);
    while (flag) {
        cout << "\nЧто вы хотите сделать?" << endl;
        cout << "1. Повернуть фигуру.\n"
            "2. Сместить объект и повернуть.\n"
            "3. Проверить точку на вхождение.\n"
            "4. Закрыть и выйти.\n";
        cout << "> ";
        cin >> ans;

        switch (ans) {
        case 1:
            cout << "Введите угол: ";
            cin >> angle;
            figure.Rotate(angle);
            cout << endl;
            cout << "Угол = " << figure.GetAngle() << endl;
            break;
        case 2:
            cout << "Введите x1: ";
            cin >> x;
            cout << "Введите y1: ";
            cin >> y;
            point.SetX(x);
            point.SetY(y);
            cout << "Введите угол: ";
            cin >> angle;
            figure.Move(point, angle);
            cout << endl;
            cout << "Новые координаты центра: " << figure.GetCenter() << endl;
            cout << "Новый угол: " << figure.GetAngle() << endl;
            break;
        case 3:
            cout << "Введите координату x: ";
            cin >> x;
            cout << "Введите координату y: ";
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

