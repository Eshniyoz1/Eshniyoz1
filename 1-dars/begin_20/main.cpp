#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   float x1, x2, x3, y1, y2, y3, p, s, a, b, c;

   cout <<"x1 = "; cin>>x1;
   cout <<"x2 = "; cin>>x2;
   cout <<"x3 = "; cin>>x3;

   cout <<"y1 = "; cin>>y1;
   cout <<"y2 = "; cin>>y2;
   cout <<"y3 = "; cin>>y3;

   a = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
   b = sqrt(pow((x3-x2), 2) + pow((y3-y2), 2));
   c = sqrt(pow((x3-x1), 2) + pow((y3-y1), 2));

   p = (a + b + c)/2;

   s = sqrt(p*(p-a)*(p-b)*(p-c));

   cout <<"Perimetr = "<<p*2<< endl;
   cout <<"Yuza = "<<s<< endl;
   return 0;
}
