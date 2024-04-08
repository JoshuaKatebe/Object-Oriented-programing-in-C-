#include <iostream>
using namespace std;

int main(){
    int n, i; 
    int fac = 1;
    cout << "Enter n: ";
    cin >> n;

    for(i = 1; i <= n; i++){
        fac = fac * i;
    }
    cout << "The factorial of " << n <<" is ";
    cout << fac;

    return 0;
}