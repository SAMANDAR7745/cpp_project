#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double a, b, c, x = 5, Y = 0;
    cin >> a >> b >> c;
    do
    {
        Y += ( a * a + b * x + pow(x, c) ) / ( a * a + b * b + x * x );
        x += 0.4;  
    }
    while (x <= 10);
    printf("%.2f\n", Y);
    return 0;
     
}