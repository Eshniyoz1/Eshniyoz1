#include <iostream>

using namespace std;

int main()
{
    enum hafta_kunlari { Yanvar = 1, Fevral = 2, Mart = 3, Aprel = 4, May = 5, Iyun = 6,
    Iyul = 7, Avgust = 8, Sentyabr = 9, Oktyabr = 10, Noyabr = 11, Dekabr = 12,};
    int oy;

    cout << " Oylarning nomlarini kiriting = ";
    cin >> oy;
    switch (oy)
    {
        case Yanvar : cout << "Yanvar" << endl; break;
        case Fevral : cout << "Fevral" << endl; break;
        case Mart : cout << "Mart" << endl; break;
        case Aprel : cout << "Aprel" << endl; break;
        case May : cout << "May" << endl; break;
        case Iyun : cout << "Iyun" << endl; break;
        case Iyul : cout << "Iyul" << endl; break;
        case Avgust : cout << "Avgust" << endl; break;
        case Sentyabr : cout << "Sentyabr" << endl; break;
        case Oktyabr : cout << "Oktyabr" << endl; break;
        case Noyabr : cout << "Noyabr" << endl; break;
        case Dekabr : cout << "Dekabr" << endl; break;

        default : cout << "Bunday oylar nomi mavjud emas";
    }
    return 0;
}
