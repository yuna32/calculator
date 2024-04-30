#include "sphere.h"
#include <iostream>
using namespace std;



double Sphere::SurfaceArea() {
    return 4 * 3.14 * radius * radius;
}

double Sphere::Volume() {
    return (4 * 3.14 * radius * radius * radius) / 3;
}