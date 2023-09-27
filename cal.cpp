//Build simple calculator
#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter 1st no. :";
    cin>>a;
    cout<<"enter 2nd no. :";
    cin>>b;
    int choice;
    cout<<"1. Addition "<<endl<<"2. Substraction "<<endl<<"3. Division"<<endl<<"4. Multiplication"<<endl;
    cout<<"which operation you want to perform?? ";
    cin>>choice;
    switch (choice){
        case 1:
            cout<<a <<"+"<<b<<"="<<a+b;
            break;
        case 2:
            cout<<a <<"-"<<b<<"="<<a-b;
            break;
        case 3:
            cout<<a <<"/"<<b<<"="<<a/b;
            break;
        case 4:
            cout<<a <<"*"<<b<<"="<<a*b;
            break;
        default:
            cout<<"Enter correct choice.";
    }
}
