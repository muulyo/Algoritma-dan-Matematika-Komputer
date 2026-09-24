#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
   
   double jarak, konsumsibahanbakar, hargabensin;
    double total_biaya_bahan_bakar;

    cout << "jarak tempuh  :";
    cin >> jarak;

    cout << "konsumsi bahan bakar :";
    cin >> konsumsibahanbakar;

    cout << "harga bahan bakar :";
    cin >> hargabensin;
    
    total_biaya_bahan_bakar = (jarak / konsumsibahanbakar)*hargabensin;

    cout << endl;
    cout << "total biaya bahan bakar: " << total_biaya_bahan_bakar << endl;

    return 0;
   
}
