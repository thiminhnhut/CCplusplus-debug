#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
    float a, b, c;
    
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;

    float delta = b*b - 4*a*c;

    if (delta > 0) {
        float x1 = (-b + sqrt(delta))/(2 * a);
        float x2 = (-b - sqrt(delta))/(2 * a);
        cout << "x1 = " << x1 << "\tx2 = " << x2 << endl;
    } else if (delta == 0) {
        float x = -b/(2 * a);
        cout << "x = " << x << endl;
    } else {
        cout << "Phuong trinh vo nghiem" << endl;
    }
    return 0;
}