#include <iostream>

using namespace std;

int main()
{
    int  m[6]={4, 5, 7, 8, 6, 9}, n, b=0;
    n=5;
    for(int i=0; i<=n; i++)
    {
        if(m[i]%2==1)
        {
        b++;

    cout<<m[i]<<", ";}}
    cout<<"toq sonlar="<<b;
    return 0;
}
