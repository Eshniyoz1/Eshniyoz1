#include <iostream>

using namespace std;

int main()
{
    float a, b;
    int n;
    cout<<"A="; cin>>a;
    cout<<"B="; cin>>b;
     cout<<"Amallardi tanlash uchun raqamini tanlang:\n1 qo'shish\n2 ayirish\n3 ko'paytrish\n4 bo'lish\n>>>"; cin>>n;

    switch(n)
    {
    case 1: cout<<a<<"+"<<b<<"="<<a+b<<endl; break;
    case 2: cout<<a<<"-"<<b<<"="<<a-b<<endl; break;
    case 3: cout<<a<<"*"<<b<<"="<<a*b<<endl; break;
    case 4: cout<<a<<"/"<<b<<"="<<a/b<<endl; break;
  default: cout<<"Diqqat! Noto'g'ri amal tanladingiz\nIltimos 5 dan kichik son kiriting";
    }
    return 0;
}
