#include <iostream>

using namespace std;
int main()
{
    char nama[20],nim[10],tanggal_lahir[20],alamat[30];
    double no_telepon;

    cout << "============================"<< endl;
    cout << "=     VILDAN VINANDA       ="<< endl;
    cout << "============================"<< endl;
    cout << "                           "<<endl;
    cout << "                           "<<endl;
    cout << "========INPUT DATA DIRI======="<<endl;
    cout << " Silahkan Masukan Nama          :";cin >> nama;
    cout << " Silahkan Masukan NIM           :";cin >> nim;
    cout << " Silahkan Masukan Tanggal Lahir :";cin >> tanggal_lahir;
    cout << " Silahkan Masukan Alamat        :";cin >> alamat;
    cout << " Silahkan Masukan No Telepon    :";cin >> no_telepon;
    cout << "                              /n"<<endl;
    cout << "======INFORMASI DATA DIRI====="<<endl;
    cout << "Nama          :" << nama;
    cout << endl;
    cout << "NIM           :" << nim;
    cout << endl;
    cout << "Tanggal Lahir :" << tanggal_lahir;
    cout << endl;
    cout << "Alamat        :" << alamat;
    cout << endl;
    cout << "No Telepon    :" << no_telepon;
    cout << endl;

    return 0;
}

