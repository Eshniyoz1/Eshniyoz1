#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout<<"A="; cin>>a;
    cout<<"B="; cin>>b;

    if(a==b)
    c=0;
    else{
        if(a<b){
            c = b;}
            else{
            c = a;};
        }
        cout<<"A="<<c<<endl;
        cout<<"B="<<c<<endl;
    return 0;
}
