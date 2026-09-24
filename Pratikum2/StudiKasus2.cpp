#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    double hargaBarang, diskon;
    cout << "Harga Barang: "; cin >> hargaBarang;
    cout << "Diskon (%): "; cin >> diskon;

    double hargaSetelahDiskon = hargaBarang - (hargaBarang*diskon/100);

   cout << fixed << setprecision(2);
   cout << "Harga Awal: Rp." << hargaBarang << endl;
   cout << "Diskon: " << diskon << "%" << endl;
   cout << "Harga Setelah Diskon: Rp." << hargaSetelahDiskon << endl;
    return 0;
}