#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double panjang, lebar, tinggi, harga_per_liter_cat;
    double luas_dinding, liter_cat, total_biaya;

    cout << "panjang ruangan :";
    cin >> panjang;
    
    cout << "lebar ruangan :";
    cin >> lebar;

    cout << "tinggi ruangan :";
    cin >> tinggi;

    cout << "harga per liter cat :";
    cin >> harga_per_liter_cat;

    luas_dinding = 2 * (panjang * tinggi + lebar * tinggi);
    liter_cat = luas_dinding / 10;
    total_biaya = liter_cat * harga_per_liter_cat;

    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Luas dinding : " << luas_dinding << " m^2" << endl;
    cout << "Jumlah liter cat yang dibutuhkan : " << liter_cat << " liter" << endl;
    cout << "Total biaya cat : Rp " << total_biaya << endl;
    return 0;
}

