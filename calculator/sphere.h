#ifndef Sphere_H
#define Sphere_H
#include <iostream>
using namespace std;

class Sphere {
private:
    double radius;

public:
    Sphere(double r) {
        cout << endl;
        cout << "**�� ���� ����**" << endl;
        cout << endl;
        radius = r;
    }
    ~Sphere() {
        cout << endl;
        cout << "�� ���� ����..." << endl;
        cout << endl;
    }

    double SurfaceArea();
    double Volume();
};

#endif