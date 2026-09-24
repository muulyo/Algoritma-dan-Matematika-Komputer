#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string nama;
    int jamkerja;
    double tarifjamkerja;

    cout << "Nama Pekerja : ";
    getline (cin, nama);

    cout << "Jam Kerja : ";
    cin >> jamkerja;

    cout << "Tarif / Jam : ";
    cin >> tarifjamkerja;

    double gajitotal = jamkerja * tarifjamkerja;

    cout << endl;
    cout << left << setw(15) << "Nama"
         << right << setw(10) << "Jam Kerja"
         << setw(15) << "Tarif / Jam"
         << setw(15) << "Gaji Total" << endl;

    cout << string(50, '-') << endl;

    cout << left << setw(15) << nama
         << right << setw(10) << jamkerja
         << setw(15) << fixed << setprecision(0) << tarifjamkerja
         << setw(15) << gajitotal << endl;
    return 0;
}