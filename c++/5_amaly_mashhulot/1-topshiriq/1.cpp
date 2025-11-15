#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;        
    double massiv[n];
    double sum = 0;
    for (int i = 0; i < n; i++){
        cin >> massiv[i];
        cout << massiv[i] << " " ;
    }
}
