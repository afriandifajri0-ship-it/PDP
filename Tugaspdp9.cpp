// #include <iostream>
// #include <string>
// using namespace std;

// // Fungsi untuk menghitung total lembur
// int hitungLembur(int jamLembur) {
//     return jamLembur * 20000; // setiap jam lembur dibayar Rp 20.000
// }

// // Fungsi untuk menghitung potongan pajak (10% jika total gaji > 5.000.000)
// int hitungPajak(int totalGaji) {
//     if (totalGaji > 5000000)
//         return totalGaji * 0.1; // 10% pajak
//     else
//         return 0;
// }

// // Fungsi utama untuk menghitung gaji bersih
// void myFunction() {
//     string nama;
//     int gajiPokok, jamLembur;

//     cout << "Masukkan nama karyawan: ";
//     getline(cin, nama);
//     cout << "Masukkan gaji pokok: ";
//     cin >> gajiPokok;
//     cout << "Masukkan jumlah jam lembur: ";
//     cin >> jamLembur;

//     int totalLembur = hitungLembur(jamLembur);
//     int totalGaji = gajiPokok + totalLembur;
//     int potonganPajak = hitungPajak(totalGaji);
//     int gajiBersih = totalGaji - potonganPajak;

//     cout << "\n=== Rincian Gaji Karyawan ===\n";
//     cout << "Nama Karyawan : " << nama << endl;
//     cout << "Gaji Pokok    : Rp " << gajiPokok << endl;
//     cout << "Total Lembur  : Rp " << totalLembur << endl;
//     cout << "Potongan Pajak: Rp " << potonganPajak << endl;
//     cout << "Gaji Bersih   : Rp " << gajiBersih << endl;
// }

// int main() {
//     myFunction();
//     return 0;
// }


#include <iostream>
using namespace std;

double hitungNilaiAkhir(double tugas, double uts, double uas) {
    return (tugas * 0.3) + (uts * 0.3) + (uas * 0.4);
}

char tentukanPredikat(double nilaiAkhir) {
    if (nilaiAkhir >= 85)
        return 'A';
    else if (nilaiAkhir >= 70)
        return 'B';
    else if (nilaiAkhir >= 55)
        return 'C';
    else
        return 'D';
}

int main() {
    string nama;
    double tugas, uts, uas;

    cout << "=== Program Hitung Nilai Akhir Mahasiswa ===\n";
    cout << "Masukkan nama mahasiswa: ";
    getline(cin, nama);
    cout << "Masukkan nilai tugas: ";
    cin >> tugas;
    cout << "Masukkan nilai UTS: ";
    cin >> uts;
    cout << "Masukkan nilai UAS: ";
    cin >> uas;

    double nilaiAkhir = hitungNilaiAkhir(tugas, uts, uas);
    char predikat = tentukanPredikat(nilaiAkhir);

    cout << "\n=== Hasil Perhitungan ===\n";
    cout << "Nama Mahasiswa : " << nama << endl;
    cout << "Nilai Tugas    : " << tugas << endl;
    cout << "Nilai UTS      : " << uts << endl;
    cout << "Nilai UAS      : " << uas << endl;
    cout << "Nilai Akhir    : " << nilaiAkhir << endl;
    cout << "Predikat       : " << predikat << endl;

    return 0;
}
