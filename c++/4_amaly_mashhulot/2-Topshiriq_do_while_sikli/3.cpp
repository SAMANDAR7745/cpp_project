#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, y = 0;
    cin >> a;

    double x = -( M_PI / 2 );
    do
    {
        y += cbrt(pow(fabs(a), a)) + (x * x) * sin(a * x);
        x += 3.26;
    } while (x <= M_PI);
    
   
    printf("%.2f\n", y);
    return 0;
}
