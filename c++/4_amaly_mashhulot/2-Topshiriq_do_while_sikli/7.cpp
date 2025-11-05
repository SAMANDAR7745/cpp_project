#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double x, b, a = 1, Y = 0;
    cin >> x >> b;
    do
    {
        Y += ( a * a ) + pow( ( ( b + sin(x) ) / ( pow( a, 3 ) + pow(cos( pow(x, 3) ), 2 ) ) ) , 5);
        a += 20;

    } while (a <= 12);
    printf("%.2f\n", Y);
    return 0;

}