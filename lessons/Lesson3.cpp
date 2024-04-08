#include <iostream>

using namespace std;

int main(){
    int n,r,temp;
    int sum = 0;

    cout << "Enter n: ";
    cin >> n;
    temp = n;

    while(n > 0){
        r = n % 10;
        sum = sum + (r*r*r);
        n = n / 10;
    }

    if(temp == sum){
        cout << "The number is an Armstrong number" << endl;
    }else{
        cout << "The number is not an Armstrong number" << endl;
    }

    return 0;
}
