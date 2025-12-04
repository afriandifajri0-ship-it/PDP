// #include <iostream>
// using namespace std;

// int main() {
//     int skor, total = 0;

//     for (int i = 1; i <= 10; i++) {
//         cout << "Masukkan skor siswa ke-" << i << ": ";
//         cin >> skor;
//         total += skor;
//     }

//     cout << "\nTotal skor seluruh siswa = " << total << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int saldo = 100000;
//     int hari = 0;

//     while (saldo < 1000000) {
//         saldo += 50000;
//         hari++;
//     }

//     cout <<"jumlah hari yang dibutuhkan: " << hari << " hari" << endl;
//     cout <<"saldo akhir: Rp" << saldo << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int password;

//     do {
//         cout << "Masukkan password: ";
//         cin >> password;
//         if (password != 12345)
//             cout << "Password salah! Coba lagi.\n";
//     } while (password != 12345);

//     cout << "Password diterima.\n";
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int jumlahBarang;
//     double harga, totalHarian, totalMingguan = 0;

//     for (int hari = 1; hari <= 7; hari++) {
//         cout << "\nHari ke-" << hari << endl;
//         totalHarian = 0;

//         while (true) {
//             cout << "Masukkan jumlah barang (0 untuk selesai): ";
//             cin >> jumlahBarang;

//             if (jumlahBarang == 0)
//             break;

//             cout << "Masukkan harga per barang: ";
//             cin >> harga;

//             totalHarian += jumlahBarang * harga;
//         }

//         cout << "Total pendapatan hari ke-" << hari << " = Rp" << totalHarian << endl;
//         totalMingguan += totalHarian;
//     }

//     cout << "\nTotal pendapatan mingguan = Rp" << totalMingguan << endl;
//     return 0;
// }
