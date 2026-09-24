#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main (){
    double jmlhRupiah, kurs, hasil;
    string namaMataUang;
    int pilihan;

    cout << "Jumlah Rupiah: "; cin >> jmlhRupiah;
    cout << "Pilih Mata Uang: ";
    cout << "1.Dolar 2.Euro 3.Yen 4.Rupee 5.Rial 6.Won 7.Ringgit 8.Baht "<< endl;
    cout << "Pilihan: "; cin >> pilihan;

    switch (pilihan) {
        case 1 : namaMataUang = "Dolar"; kurs = 17000; break;
        case 2 : namaMataUang = "Euro"; kurs = 20000; break;
        case 3 : namaMataUang = "Yen"; kurs = 133; break;
        case 4 : namaMataUang = "Rupee"; kurs = 185; break;
        case 5 : namaMataUang = "Rial"; kurs = 4700; break;
        case 6 : namaMataUang = "Won"; kurs = 12.8; break;
        case 7 : namaMataUang = "Ringgit"; kurs = 4300; break;
        case 8 : namaMataUang = "Baht"; kurs = 534; break;
        default: namaMataUang = "Pilihan Tidak Valid";
    }
    hasil =jmlhRupiah/kurs;
    
    cout << fixed << setprecision (2);
    cout << "Jumlah Rupiah: " << jmlhRupiah << endl;
    cout << "Jumlah "<< namaMataUang << ": " << hasil << endl;
    return 0;
}