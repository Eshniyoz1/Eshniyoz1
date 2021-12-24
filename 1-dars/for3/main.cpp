#include <iostream>

using namespace std;

int main()
{
    int a, b, i, c=0;

    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;

    for( i = b -1;i > a; i--)
    {
    c++;
        cout<<i<<",";
        }
cout<<"\nJami raqamlar soni "<<c<<" ta";
    return 0;
}
