#include <iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    srand(time(0));
    int ran=1+rand()%100;
    while(num!=ran)
    {
        if(num>ran)
        {
            cout<<"the number is too high"<<"\n";
            cin>>num;
        }
            
        else
        {
            cout<<"the number is too low"<<"\n";
            cin>>num;    
        }
            
    }
    cout<<"you got the right answer";
    return 0;
}
