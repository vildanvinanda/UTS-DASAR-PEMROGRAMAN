#include <iostream>
using namespace std;

int main ()
{
    int X;

    cout << "/masukan Nilai X : ";
    cin >> X;
    cout << "\n";

    X = (X < 0) ? -X : X;
    cout << "| X | = " << X;
    cout << "\n \n";

    return 0;

}
