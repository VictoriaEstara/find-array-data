#include <iostream>
#include <string>

using namespace std;

int main() {
    string kalimat;

    cout << "Masukkan array: ";
    getline(cin, kalimat);

    int jumlahKata = 0;
    size_t posSpasi = 0;

    while ((posSpasi = kalimat.find(' ', posSpasi)) != string::npos) {
        jumlahKata++;
        posSpasi++;
    }

    jumlahKata++;

    int jumlahHuruf = 0;

    for (size_t i = 0; i < kalimat.length(); ++i) {
        char karakter = kalimat[i];
        if (isalpha(karakter)) {
            jumlahHuruf++;
        }
    }

    cout << "Jumlah kata/angka dalam array berjumlah: " << jumlahKata << endl;
    cout << "Jumlah huruf dalam kalimat berjumlah: " << jumlahHuruf << endl;

    string kataCari;
    cout << "Masukkan kata/angka yang ingin Anda cari: ";
    cin >> kataCari;

    size_t posKata = kalimat.find(kataCari);
    if (posKata != string::npos) {
        
        int urutanKata = 1;
        size_t posAwal = 1;
        while ((posAwal = kalimat.find(' ', posAwal)) != string::npos) {
            if (posAwal < posKata) {
                urutanKata++;
            } else {
                break;
            }
            posAwal++;
        }

        cout << "Kata '" << kataCari << "' ditemukan pada urutan ke-" << urutanKata << " dalam data." << endl;
    } else {
        cout << "Kata '" << kataCari << "' tidak ditemukan dalam data." << endl;
    }

    return 0;
}
