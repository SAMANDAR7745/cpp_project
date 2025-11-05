#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double a, b, c, d, k, Y = 0;
    cin >> a >> b >> c >> d >> k;
    double x = d;
    do
    {
        Y += ( pow(( ( a * x + b ) / ( b * b +pow(cos(x), 2) ) ), k ) - sin( x * x ) / a * b );
        x +=15;
    } while (x <= c);
    printf("%.2f\n", Y);
    return 0;      
}