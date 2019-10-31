#include <iostream>
using namespace std;

int main ()
{
    // pengulangan menaik
    cout << "PENGUMUMAN MENAIK" << endl;
    for (int C=0; C<10; C++)
    {
        cout << C+1 << endl;
    }
    cout << "\n";
    // Pengumuman menurun
    cout << "PENGULANGAN MENURUN" << endl;
    for (int D=10; D>0; D--)
    {
        cout << D << endl;
    }
    return 0;
}
