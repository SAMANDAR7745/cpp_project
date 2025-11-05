#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double a, b, c, x = 0, Y = 0;
    cin >> a >> b >> c;
    
    do
    {
        Y += pow( ( sin( a * x ) + pow( b, ( 2 * c ) ) ), 1.0 / 2.0 ) - ( sin( x * x ) / (a * b ) );
        x += 50; 
    } while (x <= 1);
    printf("%.2f\n", Y);
    return 0;
}