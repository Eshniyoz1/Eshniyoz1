#include <iostream>

using namespace std;

int main()
{
    double n=5;
    double *kPtr;

    kPtr = &n;

    cout << "O'zgaruvchilar qiymati" << endl;
    cout << "n=" << n << endl;
    cout << "*kPtr=" << *kPtr << endl;

    cout <<"\nxotiradan asresi" << endl;
    cout <<"n - o'zgaruvchisi joylashgan adres.&n="<< &n << endl;
    cout <<"Ko'rsatkich ko'rsatayotgan adres. kPtr="<< kPtr << endl;
    cout <<"Ko'rsatkich - joylashgan adres. &kPtr="<< &kPtr << endl;

    cout <<"\no'zgaruvchilarni xotirada egallagan xajmi"<<endl;
    cout <<"sizeof(n)=" << sizeof (n) <<endl;
    cout <<"sizeof(kPtr)=" <<sizeof (kPtr) << endl;

    return 0;
}
