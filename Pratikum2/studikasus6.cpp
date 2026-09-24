#include <iostream>
#include <iomanip>


using namespace std;

int main ()
{
    double h1, h2, h3, h4, h5;
    double rata_rata_suhu_harian;

    cout << "hari 1 :";
    cin >> h1;

    cout << "hari 2 :";
    cin >> h2;

    cout << "hari 3 :";
    cin >> h3;

    cout << "hari 4 :";
    cin >> h4;

    cout << "hari 5 :";
    cin >> h5;

    rata_rata_suhu_harian = h1 + h2 + h3 + h4 + h5 / 5;

    cout << endl;
    cout << "rata rata suhu harian :" << rata_rata_suhu_harian << endl;

    return 0;

}
