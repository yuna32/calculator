#include "cylinder.h"
#include <iostream>
using namespace std;


double Cylinder::SurfaceArea() {
    return 2 * 3.14 * radius * height + 2 * 3.14 * radius * radius;
}


double Cylinder::Volume() {
    return 3.14 * radius * radius * height;
}
