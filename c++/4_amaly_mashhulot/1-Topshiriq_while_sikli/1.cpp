#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double  i, x, S = 0;
    int n = 1;
    cin >> i >> x;
    while ( n <= i )
    {
        S += ( pow(-1, (n - 1)) * pow(( x - 1 ), n) ) / n ;
        n++;
    }
    printf("%.2f\n", S);
    
    
}
