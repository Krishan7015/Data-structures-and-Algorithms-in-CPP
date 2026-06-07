#include <iostream>
using namespace std;
int main() {
    int i = 1, n, sum = 0;
    cout << "Enter a positive number:";
    cin >> n;
    while(i<=n) {
        if(i%2!=0){
            sum+=i;
        }
        i++;
    }
    cout<< "The sum of odd numbers from 1 to " << n << " is: " << sum;
    return 0;  
}