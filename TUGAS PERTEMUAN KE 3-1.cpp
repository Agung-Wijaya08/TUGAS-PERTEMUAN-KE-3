#include <iostream>
#include <string>
using namespace std;

int main() {
  string nama, tempatTinggal, pangkat;
  int umur, tabungan;

  // Input data dari user
  cout << "Masukkan nama: ";
  getline(cin, nama);
  cout << "Masukkan umur: ";
  cin >> umur;
  cout << "Masukkan tempat tinggal: ";
  cin.ignore();
  getline(cin, tempatTinggal);
  cout << "Masukkan uang tabungan dalam dollar: ";
  cin >> tabungan;

  // Analisa ciri-ciri
  if (umur > 40 && (tempatTinggal == "Nevada" || tempatTinggal == "New York" || tempatTinggal == "Havana") && tabungan > 10000000) {
    pangkat = "Don";
  } else if (umur >= 25 && umur <= 40 && (tempatTinggal == "New Jersey" || tempatTinggal == "Manhattan" || tempatTinggal == "Nevada") && tabungan >= 1000000 && tabungan <= 2000000) {
    pangkat = "Underboss";
  } else if (umur >= 18 && umur <= 24 && (tempatTinggal == "California" || tempatTinggal == "Detroit" || tempatTinggal == "Boston") && tabungan < 1000000) {
    pangkat = "Capo";
  } else {
    pangkat = "tidak mencurigakan";
  }

  // Output hasil analisa
  if (pangkat != "tidak mencurigakan") {
    cout << nama << " kemungkinan adalah seorang anggota mafia dengan " << pangkat << "." << endl;
  } else {
    cout << nama << " tidak mencurigakan." << endl;
  }

  return 0;
}

