#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double p;
    double l;
    double t;

    cout << "Panjang : ";
    cin >> p;

    cout << "Lebar : ";
    cin >> l;

    cout << "Tinggi : ";
    cin >> t;

    double v = p * l * t;
    double lp = 2 * ((p * l) + (p * t) + (l * t));


    cout << endl;
    cout << right;
    cout << setw(10) << "Panjang"
         << setw(10) << "Lebar"
         << setw(10) << "Tinggi"
         << setw(10) << "Volume"
         << setw(18) << "Luas Permukaan" << endl;
    
    cout << setw(10) << p
         << setw(10) << l
         << setw(10) << t
         << setw(10) << v
         << setw(18) << lp << endl;


return 0;
}

