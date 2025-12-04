#include <iostream>
using namespace std;

const int JUMLAH_SISWA = 4;
const int JUMLAH_MAPEL = 3;

// Menampilkan tabel nilai tanpa iomanip
void tampilkanNilai(int nilai[JUMLAH_SISWA][JUMLAH_MAPEL]) {
    cout << "\n=== TABEL NILAI SISWA ===\n";
    cout << "Siswa\tMatematika\tInggris\tIPA\n";

    for (int i = 0; i < JUMLAH_SISWA; i++) {
        cout << "Siswa " << i + 1 << "\t";
        for (int j = 0; j < JUMLAH_MAPEL; j++) {
            cout << nilai[i][j] << "\t";
        }
        cout << endl;
    }
}

void hitungRataRata(int nilai[JUMLAH_SISWA][JUMLAH_MAPEL], float rata[]) {
    for (int i = 0; i < JUMLAH_SISWA; i++) {
        int total = 0;
        for (int j = 0; j < JUMLAH_MAPEL; j++) {
            total += nilai[i][j];
        }
        rata[i] = total / 3.0;
    }
}

void nilaiTertinggi(int nilai[JUMLAH_SISWA][JUMLAH_MAPEL], int maks[]) {
    for (int j = 0; j < JUMLAH_MAPEL; j++) {
        int tertinggi = nilai[0][j];
        for (int i = 1; i < JUMLAH_SISWA; i++) {
            if (nilai[i][j] > tertinggi) {
                tertinggi = nilai[i][j];
            }
        }
        maks[j] = tertinggi;
    }
}

int main() {
    int nilai[JUMLAH_SISWA][JUMLAH_MAPEL];
    float rata[JUMLAH_SISWA];
    int tertinggi[JUMLAH_MAPEL];

    cout << "PROGRAM PENGOLAHAN NILAI SISWA\n";

    // Input nilai siswa
    for (int i = 0; i < JUMLAH_SISWA; i++) {
        cout << "\nInput nilai untuk Siswa " << i + 1 << ":\n";
        cout << "Matematika : ";
        cin >> nilai[i][0];
        cout << "Bahasa Inggris : ";
        cin >> nilai[i][1];
        cout << "IPA : ";
        cin >> nilai[i][2];
    }

    tampilkanNilai(nilai);
    hitungRataRata(nilai, rata);
    nilaiTertinggi(nilai, tertinggi);

    cout << "\n=== RATA-RATA NILAI SISWA ===\n";
    for (int i = 0; i < JUMLAH_SISWA; i++) {
        cout << "Siswa " << i + 1 << ": " << rata[i] << endl;
    }

    cout << "\n=== NILAI TERTINGGI PER MAPEL ===\n";
    cout << "Matematika : " << tertinggi[0] << endl;
    cout << "Inggris    : " << tertinggi[1] << endl;
    cout << "IPA        : " << tertinggi[2] << endl;

    float maxRata = rata[0];
    int indeks = 0;

    for (int i = 1; i < JUMLAH_SISWA; i++) {
        if (rata[i] > maxRata) {
            maxRata = rata[i];
            indeks = i;
        }
    }

    cout << "\n=== SISWA DENGAN RATA-RATA TERTINGGI ===\n";
    cout << "Siswa " << indeks + 1
         << " dengan rata-rata: " << maxRata << endl;

    return 0;
}
