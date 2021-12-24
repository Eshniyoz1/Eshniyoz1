#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c;
    bool m;
    cout <<"A="; cin>>a;
    cout <<"B="; cin>>b;
    cout <<"C="; cin>>c;

    m = (a <= b) && (b <= c);

    cout << m;
    return 0;
}
