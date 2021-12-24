#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int A, B;
    bool m;

    cout <<"A="; cin>>A;
    cout <<"B="; cin>>B;

    m = ((A%2 == 0) && (B%2 == 0)) || ((A%2 == 1) && (B%2 == 1));
    cout <<m;

    return 0;
}
