#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter a positive number:";
    cin >> n;
    for(int i=1; i<=n ; i++) {
        if(i%2==0){
            sum+=i;
        }
    }
    cout << "The sum of even numbers between 1 and " << n << " is: " << sum;
    return 0;
}