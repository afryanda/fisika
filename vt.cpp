#include <iostream> // library untuk menampilkan output
#include <cmath> // library untuk perhitungan matematika

using namespace std;
// deklarasi variabel
double g = 9.8;
double m = 68.1;
double c = 12.5;
double e = 2.71828;

// deklarasi fungsi
double v(int t){
    return (g * m / c) * (1 - pow(e, -1 * c * t / m));
}

// fungsi pertama pertama program dijalankan
int main(){
    int t;

    cout << "Hitung kecepatan payung" << endl;
    cout << "=======================" << endl;

    cout << "Masukkan t: ";
    cin >> t;

    cout << "saat t="<< t <<" maka kecepatan turunan = " << v(t) << " m/s" << endl;
    return 0;
}
