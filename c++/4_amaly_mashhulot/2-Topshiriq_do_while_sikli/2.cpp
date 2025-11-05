#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d, y = 0;
    cin >> a >> b >> c >> d;

    double x = d;

    if (a == 0 || b == 0) {
        cerr << "Error: a yoki b nol bo'lsa bo'linish xatosi.\n";
        return 1;
    }

    do {
        y += cbrt((a * x + b) / (b * b + pow(cos(x), 2)))
           - sin(x * x) / (a * b);
        x += 0.3;
    } 
    while (x <= c);

    printf("%.2f\n", y);
    return 0;
}
