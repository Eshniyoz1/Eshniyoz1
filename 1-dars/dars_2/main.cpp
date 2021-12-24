#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int A, B, C, AC, BC, y;

    cout << "A= "; cin >>A;
    cout << "B= "; cin >>B;
    cout << "C= "; cin >>C;

    AC = abs(A - C);
    BC = abs(B - C);
    y = AC + BC;

    cout <<"A va C kesma uzunligi = "<<AC<< endl;
    cout <<"B va C kesma uzunligi = "<<BC<< endl;
    cout <<"AC va BC kesmalar yig'indisi = "<<y<< endl;

    return 0;
}
