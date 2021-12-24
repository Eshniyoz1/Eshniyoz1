#include <iostream>

using namespace std;

int main()
{
    int m[10], d=1, n;
    cout<<"n="; cin>>n;

    for(int i=0; i<=n; i++)
    {
        m[i]=d;
        d *= 2;
        cout<<"2 ning "<<i<<"-darajasi "<<m[i]<<" ga teng"<<endl;

        }

    return 0;
}
