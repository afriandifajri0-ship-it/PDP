#include <iostream>
using namespace std;

// int main () {
//     int usia;
//     cout << "Masukkan usia ";
//     cin >> usia;

//     if (usia < 12 ) {
//         cout << "termasuk kategori Anak-Anak" << endl;
//     } else if ( usia >= 12 && usia < 17 ) {
//         cout << "termasuk kategori Remaja" << endl;
//     } else if ( usia >=18 && usia < 59 ) {
//         cout << "termasuk kategori Dewasa" << endl;
//     } else if ( usia >= 60 ) {
//         cout << "termasuk kategori Lansia" << endl;
//     } else {
//         cout << "tidak termasuk kategori usia" << endl;
//     }

// }


int main () {
    int menu;
    cout << "selamat datang di rumah makan suka maju" << endl;
    cout << " 1. nasi goreng " << endl;
    cout << " 2. mie ayam " << endl;
    cout << " 3. soto ayam " << endl;
    cout << " 4. bakso " << endl;

    cout << "silahkan pilih menunya" << endl;
    cin >> menu;
    
    switch (menu) {
        case 1 :
            cout << "pesanan anda adalah nasi goreng" << endl;
            break;
        case 2 :
            cout << "pesanan anda adalah mie ayam" << endl;
            break;
        case 3 :
            cout << "pesanan anda adalah soto ayam" << endl;
            break;
        case 4 :
            cout << "pesanan anda adalah bakso" << endl;
            break;
        default:
             cout << "pesanan tidak tersedia mas/mbak" << endl;
        
        return 0;
    }
}