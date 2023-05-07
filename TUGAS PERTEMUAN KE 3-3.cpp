#include <iostream>

using namespace std;

int main()
{
    int nomor_punggung;

    cout << "Masukkan nomor punggung pemain: ";
    cin >> nomor_punggung;

    if (nomor_punggung % 2 == 0) {
        if (nomor_punggung >= 50 && nomor_punggung <= 100) {
            cout << "Nomor punggung " << nomor_punggung << " digunakan untuk pemain yang berhak dipilih menjadi capten team" << endl;
        } else {
            cout << "Nomor punggung " << nomor_punggung << " digunakan untuk posisi target attacker" << endl;
        }
    } else {
        if (nomor_punggung % 15 == 0) {
            cout << "Nomor punggung " << nomor_punggung << " digunakan untuk posisi keeper" << endl;
        } else if (nomor_punggung > 90) {
            cout << "Nomor punggung " << nomor_punggung << " digunakan untuk posisi playmaker" << endl;
        } else {
            cout << "Nomor punggung " << nomor_punggung << " digunakan untuk posisi defender" << endl;
        }
    }

    return 0;
}

