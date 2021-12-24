#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, n, x, l;

     cout<<"n="; cin>>n;
     a = n / 100;
     b = (n % 100)/10;
     c = n %10;

     d = a + b + c;

     x = n / d;
     l = n % d;
    cout<<"Yig'indisi="<<d<<endl;
     cout<<"Butun qismi="<<x<<endl;
     cout<<"Qoldiq qismi="<<l<<endl;

    return 0;
}
