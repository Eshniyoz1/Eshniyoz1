#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cout<<"A="; cin>>a;
    cout<<"B="; cin>>b;
    cout<<"C="; cin>>c;

    if(((a>b) && (b>c)) || ((a<b) && (b>c)))
    {d = c;}
    else if(((a>c) && (c>b)) || ((a<c) && (c>b)))
    {d = b;}
    else if(((b>c) && (c>a)) || ((b<c) && (c>a)))
    {d = a;}

    cout<<"Kichigi="<<d<<endl;
    return 0;
}
