#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    char op;
    

    cout<<"Enter the numbers: ";
    cin>>num1>>num2;
    cout<<"Enter the operation to be performed: ";
    cin>>op;
    switch(op)
    {
        case '+': cout<<"Sum of "<<num1<<" and "<<num2<<" is: " <<num1+num2;
            break;
        case '-': cout<<"Diiference of "<<num1<<" and "<<num2<<" is: " <<num1-num2;
            break;
        case '*': cout<<"Product of "<<num1<<" and "<<num2<<" is: " <<num1*num2;
            break;
        case '/': cout<<"Division of "<<num1<<" and "<<num2<<" is: " <<num1/num2;
            break;
        default: cout<<"Wrong input";
    }
    
    return 0;
}
