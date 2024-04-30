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
        cout << "���ϴ� ����� �����ϼ���." << endl;
        cout << "1. ���� ���� ���" << endl;
        cout << "2. ���� �ѷ� ���" << endl;
        cout << "3. ������� ���� ���" << endl;
        cout << "4. ������� �ѳ��� ���" << endl;
        cout << "5. ������ ���� ���" << endl;
        cout << "6. ���� ���� ���" << endl;
        cout << "7. ���� �ѳ��� ���" << endl;
        cout << "8. ����" << endl;
        cout << "����:";
        cin >> number;
        cout << endl;

        if (number == 1) {
            cout << "�������� �Է��ϼ���: ";
            cin >> radius;
            Circle circle(radius);
            double area = circle.Area();
            cout << "���� ����: " << area << endl;
        }

        if (number == 2) {
            cout << "�������� �Է��ϼ���: ";
            cin >> radius;
            Circle circle(radius);
            double circumference = circle.Circumference();
            cout << "���� �ѷ�: " << circumference << endl;
        }

        if (number == 3) {
            cout << "�������� �Է��ϼ���: ";
            cin >> radius; 
            cout << endl;
            cout << "���̸� �Է��ϼ���: ";
            cin >> height;
            Cylinder cylinder(radius, height); 
            double volume = cylinder.Volume();
            cout << "������� ����: " << volume << endl;


        }

        if (number == 4) {
            cout << "�������� �Է��ϼ���: ";
            cin >> radius;
            cout << endl;
            cout << "���̸� �Է��ϼ���: ";
            cin >> height;
            Cylinder cylinder(radius, height);
            double surface_area = cylinder.SurfaceArea();
            cout << "������� �ѳ���: " << surface_area << endl;

        }

        if (number == 5) {
            cout << "�������� �Է��ϼ���: ";
            cin >> radius;
            cout << endl;
            cout << "���̸� �Է��ϼ���: ";
            cin >> height;
            Cone cone(radius, height);
            double volume = cone.Volume();
            cout << "������ ����: " << volume << endl;
        }

        if (number == 6) {
            cout << "�������� �Է��ϼ���: ";
            cin >> radius;
            Sphere sphere(radius);
            double volume = sphere.Volume();
            cout << "���� ����: " << volume << endl;
        }

        if (number == 7) {
            cout << "�������� �Է��ϼ���: ";
            cin >> radius;
            Sphere sphere(radius);
            double surface_area = sphere.SurfaceArea();
            cout << "���� �ѳ���: " << surface_area << endl;
        }
        
        if (number == 8) {
            std::cout << "���α׷��� �����մϴ�." << std::endl;
            break;
        }
    }

    return 0;
}
