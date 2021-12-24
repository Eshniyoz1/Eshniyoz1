#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c, d;
    bool m;

    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"c="; cin>>c;

    d = pow(b, 2)-4*a*c;

    m = (d >= 0);

    cout<<m;
    return 0;
}
