#ifndef Cylinder_H
#define Cylinder_H
#include <iostream>
using namespace std;

class Cylinder {
private:
    double radius;
    double height;

public:
    Cylinder(double r, double h) {
        cout << endl;
        cout << "**����� ���� ����**" << endl;
        cout << endl;
        radius = r;
        height = h;
    }

    ~Cylinder() {
         cout << endl;
         cout << "����� ���� ����..." << endl;
         cout << endl;
        }

    double SurfaceArea();
    double Volume();
};

#endif Cylinder_H