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
        cout << "**구 계산기 접속**" << endl;
        cout << endl;
        radius = r;
    }
    ~Sphere() {
        cout << endl;
        cout << "구 계산기 종료..." << endl;
        cout << endl;
    }

    double SurfaceArea();
    double Volume();
};

#endif