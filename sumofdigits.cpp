#include <iostream>
using namespace std;
sum(int n){
    int sum = 0,a;
    while(n>0){
    a = n%10;
    sum = sum + a;
    n = n/10;
    }
    return sum;
}
int main(){
    int b;
    cout << "Enter a number: ";
    cin >> b;
    cout << "Sum of digits of " << b << " is: "<< sum(b); 
    return 0;
}