#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1, x2, y1, y2, a1, a2, b1, b2;
    bool c;

    cout<<"x1="; cin>>x1;
    cout<<"y1="; cin>>y1;

    cout<<"x2="; cin>>x2;
    cout<<"y2="; cin>>y2;

    a1 = x1+1; b1 = y1+1;
    a2 = x1-1; b2 = y1-1;

    c = (((x2<=a1) && (y2<=b1)) || ((x2<=a1) && (y2<=b1))) || (((x2==a1) && (y2==b1)) || ((x2==a2) && (y2==b2)));

    cout<<c;

    return 0;
}
