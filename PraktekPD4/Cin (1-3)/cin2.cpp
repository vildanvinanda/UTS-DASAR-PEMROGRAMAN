#include <iostream>
using namespace std;

int main ()
{
    char tampilkan [1];
    char panjang_data[50];
    cout << "===================================\n";
    cout << "       Belajar PEmrograman C++     \n";
    cout << "===================================\n";
    cout << "Nama: ";
    cin.getline(panjang_data,50);
    cout << "Jurusan: Teknik Informatika - STMIK Sumedang ";
    cin.getline(tampilkan,1);

    return 0;
}
