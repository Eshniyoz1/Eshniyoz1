#include <iostream>

using namespace std;

int main()
{
   int a, b, n, m, c;
    bool d;

   cout <<"n="; cin>>n;

   a = n % 10;
   b = n / 10;
   c = n / 100;
   m = a + b;
   d = c >= 1;
    if (d == 1)
    cout<<"2 xonali son kiritilsin"<<endl;
    else
    cout<<m;




    return 0;
}
