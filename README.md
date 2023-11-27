## Gambaran Umum

Kode ini berfungsi untuk mencari data didalam array

Informasi:

1. Mendukung data bertipe integer
2. Mendukung data bertipe char atau string
3. Jumlah data array bersifat tak terbatas atau infinity.

## Bahasa Pemrograman

Kode proyek ini ditulis menggunakan bahasa pemrograman C++.

## Software Pendukung

Proyek ini dikembangkan menggunakan [Dev-C++ v5.11](https://sourceforge.net/projects/orwelldevcpp/). Pastikan Anda memiliki Dev-C++ terpasang sebelum menjalankan proyek.

## Cara Penggunaan

1. Buka proyek menggunakan Dev-C++.
2. Jalankan aplikasi dengan melakukan compile dan Run (shortcut F11).
4. Ikuti petunjuk, dengan memasukkan data array.
5. Kemudian tekan 'enter' untuk menampilkan jumlah kata/angka dalam array, jumlah huruf dalam kalimat, serta menghitung jumlah data array yang dimasukkan.
6. Ikuti petunjuk, dengan memasukkan kata/angka yang ingin anda cari.
7. Kemudian tekan 'enter' untuk mengetahui hasil pencarian.

## Contoh Penggunaan Program

```cpp
// Library yang digunakan
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
