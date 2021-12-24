#include <iostream>

using namespace std;

int main()
{
      int n;
    cout<<"n="; cin>>n;
    int m[n],d;

    for(int a=0; a<=n; a++)
    {cout<<"m["<<a<<"]="; cin>>m[a];}
    for(int b=0; b<=n; b++)
    {

    for(int i=b; i<=n; i++)
{
   if(m[b]> m[i])
   { d = m[b];
       m[b] = m[i];
     m[i] = d;
       }
}
cout<<m[b]<<endl;


    }
    return 0;
}
