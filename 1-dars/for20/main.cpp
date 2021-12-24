#include <iostream>

using namespace std;

int main()
{
    int n, c=1, y;
    cout<<"n="; cin>>n;
    y = 0;
    for(int i = 1; i<=n; i++)
    {
        c *= i;
        y += c;
        }
        cout<<y;
    return 0;
}
