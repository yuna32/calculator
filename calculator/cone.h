#ifndef Cone_H
#define Cone_H
#include <iostream>
using namespace std;

class Cone {
private:
    double radius;
    double height;

public:
    Cone(double r, double h) {
        cout << endl;
        cout << "**���� ���� ���� ����**" << endl;
        cout << endl;
        radius = r;
        height = h;
    }

    ~Cone() {
        cout << endl;
        cout << "���� ���� ���� ����..." << endl;
        cout << endl;
    }

    double Volume();
};

#endif Cylinder_H
