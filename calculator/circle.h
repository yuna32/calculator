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
        cout << "**평면 원 계산기 접속**" << endl;
        cout << endl;
        radius = r;
    }
    ~Circle() {
        cout << endl;
        cout << "평면 원 계산기 종료..." << endl;
        cout << endl;
    }

    double Circumference();
    double Area();
};

#endif
