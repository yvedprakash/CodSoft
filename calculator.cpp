#include<iostream>
using namespace std;
int main()
{
    float n1,n2;
    char ch;
    cout<<"Enter The First Number\n";
    cin>>n1;
    cout<<"Enter The Second Number\n";
    cin>>n2;
    cout<<"Enter The Operation To Be Performed(+ - * /)\n";
    cin>>ch;
    switch(ch)
    {
        case '+':
        {
            cout<<"Addition of "<<n1<<" and "<<n2<<" is-: "<<(n1+n2);
            break;
        }
        case '-':
        {
            cout<<"Subtration of "<<n1<<" and "<<n2<<" is-: "<<(n1-n2);
            break;
        }
        case '*':
        {
            cout<<"Multiplication of "<<n1<<" and "<<n2<<" is-: "<<(n1*n2);
            break;
        }
        case '/':
        {
            cout<<"Division of "<<n1<<" and "<<n2<<" is-: "<<(n1/n2);
            break;
        }
        default:
        {
            cout<<"Wrong Operator\n";
        }
    }
    return 0;
}