#include<iostream>
#include<math.h>
using namespace std;

int main(){
     double P = 1.0, k = 1.0;
     while(k <= 46){
        P *=  k / (pow(k, 3.0) + 7.0 * k + 5.0);
	   k ++;
     }
     printf("%.2f", P); 

}

