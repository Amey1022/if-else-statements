#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter num 1:";
    cin>> a;
    cout<<"enter num 2:";
    cin>>b;
    cout<<"enter num 3:";
    cin>>c;
    if (a>b && a>c)
    {
        cout<<a<<" is the largest"<<endl;
    }
    else if (b>a && b>c)
    {
        cout<<b<<" is the largest"<<endl;
    }
    else if (c>a && c>b)
    {
        cout<<c<<" is the largest"<<endl;
    }
}