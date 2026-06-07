#include <iostream>
using namespace std;
int main() {
    double a,b,result;
    char op, choice;
    do{
    cout<<"Enter first number: "; 
    cin >> a;
    cout<<"Enter opertator (+,-,/,*): ";
    cin >> op;
    cout<<"Enter second number: ";
    cin >> b;
    if(op=='+')
    result = a+b;
    else if(op=='-')
    result = a-b;
    else if(op=='/') {
        if(b!=0){
            result = a/b;
        }
        else{
            cout<<"ERROR! Can't divide by 0.";
            return 1;
        }
    }
    else if(op=='*')
    result = a*b;
    else{
        cout<<"ERROR! Invalid operator.";
        return 1;
    }
    cout<< "Result: " <<result <<endl;
    cout<<"Do you want to calculate again (Y/N)? ";
    cin >> choice;
}
while(choice=='Y' || choice=='y');
cout<<"Calcualtor exited. Goodbye!";
return 0;
}