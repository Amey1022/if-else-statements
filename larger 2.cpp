#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter num 1:";
    cin>> a;
    cout<<"enter num 2:";
    cin>>b;
    if (a>b)
    {
        cout<<a<<" is greater than "<<b<<endl;
    }
    else
    {
        cout<<b<<" is greater than "<<a<<endl;
    }
}
/* OUTPUT
enter num 1:10
enter num 2:20
20 is greater than 10
*/
