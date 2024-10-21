#include<iostream>
using namespace std;

class Karyawan {
    int upahKerja, jamKerja, hasil, jamLembur, hasilLembur, upahLembur;
    char golongan;
    string namaKaryawan;

public:
    // Fungsi untuk input data dan hitung gaji
    void golonganKaryawan() {
        cout << "Masukkan nama karyawan: ";
        cin >> namaKaryawan;
        cout << "Masukkan golongan: ";
        cin >> golongan;

        switch (golongan) {
        case 'A':
            upahKerja = 4000;
            cout << "Masukkan jam kerja: ";
            cin >> jamKerja;
            hasil = jamKerja * upahKerja;
            printDetail();
            break;
        case 'B':
            upahKerja = 3000;
            cout << "Masukkan jam kerja: ";
            cin >> jamKerja;
            hasil = jamKerja * upahKerja;
            printDetail();
            break;
        case 'C':
            upahKerja = 2000;
            cout << "Masukkan jam kerja: ";
            cin >> jamKerja;
            hasil = jamKerja * upahKerja;
            printDetail();
            break;
        case 'D':
            upahKerja = 1000;
            cout << "Masukkan jam kerja: ";
            cin >> jamKerja;
            hasil = jamKerja * upahKerja;
            printDetail();
            break;
        default:
            cout << "Pilihan golongan yang Anda masukkan tidak ada" << endl;
        }
    }

    // Fungsi untuk mencetak detail gaji
    void printDetail() {
        cout << "==========================" << endl;
        cout << "Nama karyawan: " << namaKaryawan << endl;
        cout << "Golongan: " << golongan << endl;
        cout << "Jam Kerja: " << jamKerja << endl;
        cout << "Upah per jam: " << upahKerja << endl;
        cout << "Total upah (sebelum lembur): " << hasil << endl;
        cout << "==========================" << endl;
        confirmAccess();
    }

    // Fungsi untuk menghitung lembur
    void confirmAccess() {
        upahLembur = 4000; // Atur upah lembur
        char response;
        cout << "Apakah dia lembur? [Y/N]: ";
        cin >> response;

        if (response == 'Y' || response == 'y') {
            cout << "Masukkan jam lembur: ";
            cin >> jamLembur;
            hasilLembur = (upahLembur * jamLembur) + hasil;
            cout << "Maka total gaji Anda adalah: " << hasilLembur << endl;
        }
        else {
            cout << "Maka total gaji Anda adalah: " << hasil << endl;
        }
    }
};

int main() {
    char lanjut;
    do {
        Karyawan karyawan;
        karyawan.golonganKaryawan();

        cout << "\nApakah Anda ingin menghitung gaji karyawan lain? [Y/N]: ";
        cin >> lanjut;
        cout << endl;
    } while (lanjut == 'Y' || lanjut == 'y');

    cout << "Program selesai." << endl;
    return 0;
}