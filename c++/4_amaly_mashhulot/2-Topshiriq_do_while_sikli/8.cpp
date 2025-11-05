#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double a = 3, b = 12, c = 6, Y = 0, x = 1;
    do
    {
        Y += ( a * x * x ) / ( b ) + (x / c);
        x += 8;
    } while (x <= 10);
    printf("%.2f\n", Y);
    return 0;
    
}