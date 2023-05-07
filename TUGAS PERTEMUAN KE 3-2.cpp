#include <iostream>
#include <string>

using namespace std;

int main() {
  int codingScore;
  string interviewScore;

  // Input nilai coding
  cout << "Silahkan Masukkan Nilai Coding: ";
  cin >> codingScore;

  // Input nilai interview
  cout << "Silahkan Masukkan Nilai Interview (A atau B): ";
  cin >> interviewScore;

  // Evaluasi hasil tes
  if (codingScore >= 80) {
    cout << "Selamat Kamu Berhasil Menjadi Calon Programmer" << endl;
  } else if (codingScore >= 60 && codingScore < 80 && (interviewScore == "A" || interviewScore == "B")) {
    cout << "Selamat Kamu Berhasil Menjadi Calon Programmer" << endl;
  } else {
    cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer" << endl;
  }

  return 0;
}

