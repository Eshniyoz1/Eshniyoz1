#include <iostream>

using namespace std;

int main()
{
    enum hafta_kunlari { Dushanba = 1, Seshanba = 2, Chorshanba = 3, Payshanba = 4, Juma = 5, Shanba = 6, Yakshanba = 7};
    int kun;

    cout << "Hafta kunini kiriting = ";
    cin >> kun;
    switch (kun)
    {
        case Dushanba : cout << "Dushanba" << endl; break;
        case Seshanba : cout << "Seshanba" << endl; break;
        case Chorshanba : cout << "Chorshanba" << endl; break;
        case Payshanba : cout << "Payshanba" << endl; break;
        case Juma : cout << "Juma" << endl; break;
        case Shanba : cout << "Shanba" << endl; break;
        case Yakshanba : cout << "Yakshanba" << endl; break;

        default : cout << "Bunday hafta kunlari yo'q";
    }
    return 0;
}
