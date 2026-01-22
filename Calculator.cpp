#include<iostream>
using namespace std;
int main() {
    double a, b;
    char op;
    cout<<"Enter the first value";
    cin >> a ;
    cout<<"Enter the second value";
    cin>>b;
    cout<<"Enter the operation";
    cin>>op;
    switch(op) {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            if(b != 0)
                cout << a / b;
            else
                cout << "Division by zero not allowed";
            break;
        default:
            cout << "Invalid operator";
    }
}
