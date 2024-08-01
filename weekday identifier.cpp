#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a number for day(1-7):";
    cin>>a;
    switch(a)
    {
        case 1:
            cout<<"You have chosen Monday!";
            break;
        case 2:
            cout<<"You have chosen Tuesday!";
            break;
        case 3:
            cout<<"You have chosen Wednesday!";
            break;
        case 4:
            cout<<"You have chosen Thursday!";
            break;
        case 5:
            cout<<"You have chosen Friday!";
            break;
        case 6:
            cout<<"You have chosen Saturday!";
            break;
        case 7:
            cout<<"You have chosen Sunday!";
            break;
        default :
            cout<<"Please choose a number from 1-7 only!!";
    }
    

    
}



