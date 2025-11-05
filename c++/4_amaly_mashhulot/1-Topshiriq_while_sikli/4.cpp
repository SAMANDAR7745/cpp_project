#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double x, i ,S = 0, n = 1;
    cin >> x >> i;
    while ( n <= i)
    {
        S += ( pow(-1, (n-1)) * pow(x, ( 2 * n - 1 )) ) / n;
        n ++;
    }
    printf("%.2f\n", S);
    return 0;

}