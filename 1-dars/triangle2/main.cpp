#include <iostream>
#include <math.h>

using namespace std;

void Triangle(float, float, float);

int main()
{
    float a, b, c;

    cout<<"\na="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"c="; cin>>c;

    Triangle(a, b, c);


    return 0;
}

void Triangle(float a, float b, float c)
{
    float s1, p1, s2, p2, s3, p3;

    p1 = a*3;
    s1 =pow(a, 2)*(pow(3, 0.5)/4);
    cout<<"\nPerimetri="<<p1<<endl;
    cout<<"Yuzi="<<s1<<endl;

    p2 = b*3;
    s2 =pow(b, 2)*(pow(3, 0.5)/4);
    cout<<"\nPerimetri="<<p2<<endl;
    cout<<"Yuzi="<<s2<<endl;

    p3 = c*3;
    s3 =pow(c, 2)*(pow(3, 0.5)/4);
    cout<<"\nPerimetri="<<p3<<endl;
    cout<<"Yuzi="<<s3<<endl;


    }
