#include <iostream>

using namespace std;

int main()
{
    float a, b, i;
    cout<<"Konfet narxi: "; cin>>a;

    for( i = 0.1; i<=1; i += 0.1)
    {
        cout<<i<<" kg konfet narxi "<<a*i<<" so'm"<<endl;

        }
    cout<<i<<" kg konfet narxi "<<i*a<<" so'm";
    return 0;
}
