#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cout << "Nilai a =";
    cin >> a;
    cout << "Nilai b =";
    cin >> b;

    int HasilSisaBagi = a % b;
    cout << "Hasil Sisa Bagi = " << HasilSisaBagi << endl;
    return 0;
}