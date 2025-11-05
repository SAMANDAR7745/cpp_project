#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d;
    const int n = 25;

    cout << "a, b, c, d ni kiriting: ";
    cin >> a >> b >> c >> d;

    double h = (d - c) / n;
    double x = c;

    cout << "   x\t\ty" << endl;
    cout << "--------------------------" << endl;

    do {
        double den1 = b * b + pow(cos(x), 2);  // b^2 + cos^2 x
        double den2 = a * b;                   // a * b

        if (fabs(den1) < 1e-12) {
            cout << x << "\t" << "Error: den1=0 (b^2+cos^2(x)=0)" << endl;
        } else if (fabs(den2) < 1e-12) {
            cout << x << "\t" << "Error: den2=0 (a*b=0)" << endl;
        } else {
            double part1 = ( sin(a * x) + pow(b, 2 * c) ) / den1;
            double part2 = sin( x * x ) / den2;
            double inside = part1 - part2;

            double y = cbrt( inside );  // kub ildiz

            cout << x << "\t" << y << endl;
        }

        x += h;
    } while (x <= d + 1e-12); // kichik tolerans qo'shdim, nuqta xato uchun

    return 0;
}
