#include <iostream>

using namespace std;

int main()
{
   float A, B, C;
   cout<<"A="; cin>>A;
   cout<<"B="; cin>>B;

   if(A>B)
   { C = A;
   A = B;
   B = C;
       }
    cout<<A<<endl<<B;
    return 0;
}
