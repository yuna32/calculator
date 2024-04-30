#include "cone.h"
#include <iostream>
using namespace std;

double Cone::Volume() {
    return (1.0/3.0) * 3.14 * radius * radius * height;
}