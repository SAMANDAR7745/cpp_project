#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double a, Y = 0, x = 0;
    cin >> a;
    do
    {
        Y += a * cos(x) - sin( x * x );
        x += 0.5;
    } while (x <= 10);
    printf("%.2f\n", Y);
    return 0;
    
}