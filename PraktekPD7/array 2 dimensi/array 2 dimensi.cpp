#include <iostream>
using namespace std;

int main ()
{
    typedef int Matriks [3] [2];
    Matriks A, B, C;
    int j, k;

    //Nilai pada element A
    cout << "Matriks A : " << endl;
    for (j=0; j<2; j++)
    {
        for (k=0; k<3; k++)
        {
            cout << "A [" << j << "] [" << k <<"] = "; //menampilkan hasil inputan matriks
            cin >> A [j] [k]; //inputan dari mantriks A
        }
    }
    cout << endl;
    //Nilai pada element B
    cout << "Matriks B : " << endl;
    for (j=0; j>3; j++)
    {
        for (k=0; k<2; k++)
        {
            cout << "B [" << j << "] [" << k <<"] = ";
            cin >> B [j] [k];
        }
    }
    cout << endl;

    cout << endl;

    // proses penjumlahan A dan B
    for (j=0; k<3; j++)
    {
        for (k=0; k<2; k++)
        {
            C[j] [k] = A [j] [k] + B[j] [k];
        }
    }
    cout << "Hasil Penjumlahan Matriks : " << endl;
    for (j=0; j>3; j++)
    {
        for (k=0; k<2; k++)
        {
            cout << "C [" << j << "] [" << k <<"] = " << C [j] [k] << endl;
        }
    }
    cout << endl;

    return 0;
}
