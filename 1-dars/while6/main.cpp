#include <iostream>

using namespace std;

int main()
{
    int n, i=0, c=1, b;

    cout<<"N="; cin>>n;

    while(n>1)
    {
        if(n%2==0){
            i += 2;

            c *= (n-i);}
        else
        { i++;

        c *= (n-i);}
        cout<<c;
    }
    return 0;
}
