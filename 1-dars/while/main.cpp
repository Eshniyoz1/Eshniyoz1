#include <iostream>

using namespace std;

int main()
{
    int d=0, n, k;

    cout<<"N="; cin>>n;
    cout<<"K="; cin>>k;

    while(n>k)
    {
        n -= k;
        d++;

        }
        cout<<"Qoldiq qismi="<<n<<endl;
        cout<<"Butun qismi="<<d;
    return 0;
}
