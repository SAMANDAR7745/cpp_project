#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double a, b, c, Y=0;
    cin >> a >> b >> c;
    double x = c;
    do
    {
        Y += a * a * cos(x) + (sin(x) / 2 ) + b * a * a;
        x += 0.2;
    } while (x <= 6);
    printf("%.2f\n", Y);
    return 0;
    

}