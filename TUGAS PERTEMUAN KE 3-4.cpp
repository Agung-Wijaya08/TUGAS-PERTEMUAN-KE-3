#include <iostream>
using namespace std;

int main() {
    int lari, pushup, plank;
    cout << "Masukkan berapa menit melakukan lari: ";
    cin >> lari;
    cout << "Masukkan berapa kali melakukan push-up: ";
    cin >> pushup;
    cout << "Masukkan berapa menit melakukan plank: ";
    cin >> plank;

    int kalori_lari = (lari / 5) * 60;
    int kalori_pushup = (pushup / 30) * 200;
    int kalori_plank = plank * 5;

    int total_kalori = kalori_lari + kalori_pushup + kalori_plank;
    cout << "Total kalori yang terbakar adalah: " << total_kalori << " kalori." << endl;

    return 0;
}

