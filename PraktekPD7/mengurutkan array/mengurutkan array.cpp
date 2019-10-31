#include <iostream>
using namespace std;

int main ()
{
    int A[7];
    int j,k,C, temp;

    cout << "Masukan nilai pada element array : " << endl;
    for (C=0; C<7; C++)
    {
        //menginput element array
        cout << "A[" << C << "] = ";
        cin >> A[C];
    }
    cout << "\n Nilai element array sebelum diurutkan : " << endl;
    for (C=0; C<7; C++)
    {
        cout << "A[" << C << "] = " << A[C] << endl;
    }

    //pengurutan metode maksimmum-minimum
    int jmaks, U=6;
    for (j=0; j<6; j++)
    {
        jmaks = 0;
        for (k=1; k<=U; k++)
        {
            if (A[k] > A[jmaks])
            {
                jmaks = k;
            }
        }
        // penukaran Nilai Element Array
        temp = A[U];
        A[U] = A[jmaks];
        A[jmaks] = temp;
        U--;
    }
    cout << "\n Nilai Element setelah diurutkan : " << endl;
    for (C=0; C<7; C++)
    {
        cout << "A[" << C <<"] = " << A[C] << endl;
    }
    return 0;
}
