#include <iostream>
using namespace std;

int main() {
    int a,b,c;

    cout<<"Enter two numbers:";
    cin>>a>>b>>endl;

    c = a;
    a = b;
    b = c;

    cout<<"After swaping:";
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;
}    