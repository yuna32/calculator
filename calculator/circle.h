#ifndef Circle_H
#define Circle_H
#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        cout << endl;
        cout << "**��� �� ���� ����**" << endl;
        cout << endl;
        radius = r;
    }
    ~Circle() {
        cout << endl;
        cout << "��� �� ���� ����..." << endl;
        cout << endl;
    }

    double Circumference();
    double Area();
};

#endif
