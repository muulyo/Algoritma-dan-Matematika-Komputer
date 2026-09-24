#include <iostream>
#include <iomanip>

using namespace std; 

int main (){
    double height, weight;

    cout << "Height (cm): "; cin >> height;
    cout << "Weight (kg): "; cin >> weight;

    double bmi = weight / (height/100 * height/100);
    string status = (bmi >=18.5 & bmi <= 24.9) ? "Ya" : "Tidak";
    cout << fixed <<setprecision(2); cout << "BMI: " << bmi << endl;
    cout << "Status Berat Badan Ideal: " << status << endl;
    return 0;
}