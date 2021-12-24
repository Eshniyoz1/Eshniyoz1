#include <iostream>


using namespace std;

int main()
{
    int n;
    cout<<"n="; cin>>n;
    int m[n],d;
    for(int a=0; a<=n; a++)
    {
        cout<<"m["<<a<<"]="; cin>>m[a];
        }

    d=m[0];
    for(int i=1; i<=n; i++)
    {
        if(d<m[i])
        {d=m[i];}
    }
    cout<<"Kattasi="<<d;
    return 0;
}
