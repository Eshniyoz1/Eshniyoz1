#include <iostream>

using namespace std;

float min(float, float, float);

int main()
{
    float a, b, c;
    n:
    cout<<"\na= "; cin>>a;
    cout<<"b= "; cin>>b;
    cout<<"c= "; cin>>c;

    cout<<"Kichigi ="<<min(a, b, c)<<endl;
    goto n;
    return 0;
}

float min(float a, float b, float c)
{
    float m;

    if((a>c) && (b>c))
    m = c;
    if((a>b) && (b<c))
    m = b;
    if((c>a) && (b>a))
    m = a;

    return m;




    }
