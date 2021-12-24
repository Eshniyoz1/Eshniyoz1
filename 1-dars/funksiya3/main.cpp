#include <iostream>
#include <math.h>

using namespace std;

void MEAN(float, float);

int main()
{ float A, B;
    cout<<"A="; cin>>A;
    cout<<"B="; cin>>B;

    MEAN(A, B);

    return 0;
}

void MEAN(float a, float b)
{float c, d;

c = (a + b)/2;
d = pow((a*b), 0.5);

cout<<"O'rta arifmetigi ="<<c<<endl;
cout<<"O'rta geometrigi ="<<d<<endl;
}
