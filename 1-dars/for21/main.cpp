#include <iostream>

using namespace std;

int main()
{
    float n, a=1, b=0;
    cout<<"n="; cin>>n;

    for(int i = 1; i<=n; i++)
    {
        a *= i;
        b += (1/a);

        }
        cout<<b+1;
    return 0;
}
