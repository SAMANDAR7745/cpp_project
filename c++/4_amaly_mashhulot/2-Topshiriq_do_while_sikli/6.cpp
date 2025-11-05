#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double a, b, c, x= -1, Y = 0;
    cin >> a >> b >> c;
    do
    {
        Y += pow( ( ( sin( a * x ) + pow(b, ( 2 * c ) ) ) / ( b * b + pow(cos(x), 2) ) ), 3 ) - (sin(x * x) / a * b);
        x += 50;
    } while (x <= 1);
    printf("%.2f\n", Y);
    return 0;
    
    
}