#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 7;
    int c = 2;
    float d = 7;
    float e = 2;
 
    int hasil_kali = a * a;
    int hasil_sisaBagi = b % c;
    float hasil_bagi = d / e;
    int hasil_kurang = b - a;
    int hasil_tambah = a + c;

    cout << a << " x " << a << " = " << hasil_kali << endl;
    cout << b << " % " << c << " = " << hasil_sisaBagi << endl;
    cout << d << " / " << e << " = " << hasil_bagi << endl;
    cout << b << " - " << a << " = " << hasil_kurang << endl;
    cout << a << " + " << c << " = " << hasil_tambah << endl;
    
    return 0;
}
