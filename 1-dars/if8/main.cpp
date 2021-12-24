#include <iostream>

using namespace std;

int main()
{
     float A, B, C, D;
   cout<<"A="; cin>>A;
   cout<<"B="; cin>>B;

   if(A<B)
   { D = A;
    C = B;
       }
   else
   { D = B;
    C = A;}
    cout<<C<<endl<<D;
    return 0;
}
