#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, l;

   cout<<"a="; cin>>a;
   cout<<"b="; cin>>b;
   cout<<"c="; cin>>c;
    d = 0;
   if(a>0)
   d += 1;
   if(b>0)
   d += 1;
   if(c>0)
   d += 1;
   l = 3 - d;
    cout<<"Musbat sonlar="<<d<<" ta"<<endl;
    cout<<"Manfiy sonlar="<<l<<" ta"<<endl;

    return 0;
}
