#include <iostream>

using namespace std;

int main()
{
        int m[100], d, n, a;
    cout<<"progressiya bosh qiymati="; cin>>a;
    cout<<"ko'paytma progressiyasi="; cin>>d;
    cout<<"element soni="; cin>>n;

    for(int i=0; i<=n; i++)

    {
        m[i] = a;
        a *= d;
        cout<<m[i]<<endl;

        }

    return 0;
}
