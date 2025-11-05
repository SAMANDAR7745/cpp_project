#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x, i, P = 1;
    int n = 1;
    cin >> i >> x;
    while (n <= i)
        {
            P *= ( pow( ( -1 ), n ) * pow( x , ( 2 * n ) ) ) / n;
            n ++;
        }
    printf("%.2f\n", P);
    return 0;
    
    
}
