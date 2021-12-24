#include <iostream>
using namespace std;

void foo( int n, int *, int *);

int main()
{
    int n , sum, count;
cout<< "Sonni kirtiting= "; cin>>n;

   foo( n, &sum, &count);

   cout<<"Kirtilgan sonning raqamlar yig'indisi = "<<sum<<endl;
   cout<<"Kirtilgan sonning raqamlar soni = "<<count;

    return 0;
}

void foo( int n, int *sum, int *count)
{
*sum = 0;
*count = 0;
int q = 0;
    while(n > 0){
 q = n % 10;
 *sum += q;
  *count = *count + 1 ;
     n = n /  10;



    }
}
