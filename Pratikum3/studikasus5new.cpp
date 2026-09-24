#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main (){
    double height, weight;

    cout << "Height (Cm): "; cin >> height;
    cout << "Weight (Kg): "; cin >> weight;

    double heightM = height/100;
    double bmi = weight / (heightM * heightM);
    string kategori;

    if (bmi < 18.5){
        kategori = "Berat Badan Kurang (underweight)";
    }else if (bmi >= 18.5 && bmi <= 24.9){
        kategori = "Berat Badan Normal";
    }else if (bmi >= 25 && bmi <= 29.9){
        kategori = "Berat Badan Berlebih (overheight)";
    }else {
        kategori = "Obesitas";
    }
    
    cout << fixed << setprecision (2);
    cout << "BMI: " << bmi << endl;
    cout << "Kategori: " << kategori << endl;
    return 0;
}
