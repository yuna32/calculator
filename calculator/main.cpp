#include <iostream>
using namespace std;
#include "cylinder.h"
#include "circle.h"
#include "cone.h"
#include "sphere.h"

int main() {
    double radius, height;
    int number;

    while (true) {
        cout << "원하는 계산을 선택하세요." << endl;
        cout << "1. 원의 넓이 계산" << endl;
        cout << "2. 원의 둘레 계산" << endl;
        cout << "3. 원기둥의 부피 계산" << endl;
        cout << "4. 원기둥의 겉넓이 계산" << endl;
        cout << "5. 원뿔의 부피 계산" << endl;
        cout << "6. 구의 부피 계산" << endl;
        cout << "7. 구의 겉넓이 계산" << endl;
        cout << "8. 종료" << endl;
        cout << "선택:";
        cin >> number;
        cout << endl;

        if (number == 1) {
            cout << "반지름을 입력하세요: ";
            cin >> radius;
            Circle circle(radius);
            double area = circle.Area();
            cout << "원의 넓이: " << area << endl;
        }

        if (number == 2) {
            cout << "반지름을 입력하세요: ";
            cin >> radius;
            Circle circle(radius);
            double circumference = circle.Circumference();
            cout << "원의 둘레: " << circumference << endl;
        }

        if (number == 3) {
            cout << "반지름을 입력하세요: ";
            cin >> radius; 
            cout << endl;
            cout << "높이를 입력하세요: ";
            cin >> height;
            Cylinder cylinder(radius, height); 
            double volume = cylinder.Volume();
            cout << "원기둥의 부피: " << volume << endl;


        }

        if (number == 4) {
            cout << "반지름을 입력하세요: ";
            cin >> radius;
            cout << endl;
            cout << "높이를 입력하세요: ";
            cin >> height;
            Cylinder cylinder(radius, height);
            double surface_area = cylinder.SurfaceArea();
            cout << "원기둥의 겉넓이: " << surface_area << endl;

        }

        if (number == 5) {
            cout << "반지름을 입력하세요: ";
            cin >> radius;
            cout << endl;
            cout << "높이를 입력하세요: ";
            cin >> height;
            Cone cone(radius, height);
            double volume = cone.Volume();
            cout << "원뿔의 부피: " << volume << endl;
        }

        if (number == 6) {
            cout << "반지름을 입력하세요: ";
            cin >> radius;
            Sphere sphere(radius);
            double volume = sphere.Volume();
            cout << "구의 부피: " << volume << endl;
        }

        if (number == 7) {
            cout << "반지름을 입력하세요: ";
            cin >> radius;
            Sphere sphere(radius);
            double surface_area = sphere.SurfaceArea();
            cout << "구의 겉넓이: " << surface_area << endl;
        }
        
        if (number == 8) {
            std::cout << "프로그램을 종료합니다." << std::endl;
            break;
        }
    }

    return 0;
}
