#include <iostream>

using namespace std;

int main()
{
     int m[20], n, a, b;
    cout<<"A="; cin>>a;
    cout<<"B="; cin>>b;
    cout<<"n="; cin>>n;

    m[0]=a;
    m[1]=b;
    for(int i=2; i<=n+2; i++)
    {
        m[i]= m[i-1] + m[i-2];


        }
    for(int i=0; i<n; i++)
    {
       cout<<m[i]<<endl; }
    return 0;
}
