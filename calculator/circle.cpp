#include "circle.h"
#include <iostream>
using namespace std;

double Circle::Circumference() {
    return 2 * 3.14 * radius;
}

double Circle::Area() {
    return 3.14 * radius * radius;
}