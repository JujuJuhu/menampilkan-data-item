// Program Mengecek Harga Item.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct Item {
    int kodeItem;
    string namaItem;
    double harga;
    double diskon;
};

int main() {
    // Mendefinisikan array untuk menyimpan 5 data item
    Item dataItem[5];

    // Menginisialisasi data item
    dataItem[0] = { 1, "Table", 1000000, 0.10 };
    dataItem[1] = { 2, "Paper", 50000, 0.0 };
    dataItem[2] = { 3, "Envelopes", 15000, 0.10 };
    dataItem[3] = { 4, "Computer", 7000000, 0.15 };
    dataItem[4] = { 5, "Book Cases", 150000, 0.05 };


    // Meminta pengguna memasukkan kode item yang ingin ditampilkan
    int kodeCari;
    cout << "\nMasukkan Kode Item yang Ingin Ditampilkan: ";
    cin >> kodeCari;

    // Menampilkan data item berdasarkan kode item yang dimasukkan
    bool itemDitemukan = false;
    for (int i = 0; i < 5; ++i) {
        if (dataItem[i].kodeItem == kodeCari) {
            cout << "\nData Item dengan Kode " << kodeCari << ":\n";
            cout << "Kode Item: " << dataItem[i].kodeItem << endl;
            cout << "Nama Item: " << dataItem[i].namaItem << endl;
            cout << "Harga: " << dataItem[i].harga << endl;
            cout << "Diskon: " << (dataItem[i].diskon * 100) << "%" << endl;
            itemDitemukan = true;
            break; // Item ditemukan, keluar dari loop
        }
    }

    if (!itemDitemukan) {
        cout << "Data Item dengan Kode " << kodeCari << " tidak ditemukan." << endl;
    }

    return 0;
}
