#include <iostream>

using namespace std;

float PowerA3(float);

int main()
{
    float a, b, c;
    int d, e;

    cout<<"A="; cin>>a;
    cout<<a<<" ning 3-darajasi "<<PowerA3(a)<<" ga teng"<<endl;

    cout<<"B="; cin>>b;
    cout<<b<<" ning 3-darajasi "<<PowerA3(b)<<" ga teng"<<endl;

    cout<<"C="; cin>>c;
    cout<<c<<" ning 3-darajasi "<<PowerA3(c)<<" ga teng"<<endl;

    cout<<"D="; cin>>d;
    cout<<d<<" ning 3-darajasi "<<PowerA3(d)<<" ga teng"<<endl;

    cout<<"E="; cin>>e;
    cout<<e<<" ning 3-darajasi "<<PowerA3(e)<<" ga teng"<<endl;

    return 0;
}

float PowerA3(float a)
{
    float daraja;
    daraja = a * a  * a;


    return daraja;

    }
