#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Library untuk metode sort
using namespace std;

int main() {
    const int jumlahData = 6; // Ubah sesuai dengan jumlah data yang diinginkan

    // Vektor untuk menyimpan nama dan nilai agama
    vector<string> nama;
    vector<int> nilaiAgama;

    // Nama kelompok project algo uas metode sort
    cout<< "==============================="<<endl;
    cout<< "Nama Kelompok :\n"<<endl;
    cout<< "Ketua :\n"<<endl;
    cout<< "1. Mohammad Bayan Aldina (Tree)\n"<<endl;
    cout<< "Wakil Ketua :\n"<<endl;
    cout<< "2. Faizal Imam Safangat(Linked List)\n"<<endl;
    cout<< "Anggota Kelompok :\n"<<endl;
    cout<< "3. Muhammad Malikus Shaleh(Graph)\n"<<endl;
    cout<< "4. Mumtaz Fikri Nasrullah (Sort)\n"<<endl;
    cout<< "5. Novi Mutiara Sari (Membuat Video)\n"<<endl;
    cout<< "6. Nayla Alvin (Membuat Video)\n"<<endl;
    cout<< "==============================="<<endl;

    // Meminta pengguna memasukkan nama dan nilai agama menggunakan loop
    for (int i = 1; i <= jumlahData; ++i) {
        cout << "Masukkan nama ke-" << i << ": ";
        string namaInput;
        getline(cin, namaInput);
        nama.push_back(namaInput);

        cout << "Masukkan nilai agama ke-" << i << ": ";
        int nilaiAgamaInput;
        cin >> nilaiAgamaInput;
        nilaiAgama.push_back(nilaiAgamaInput);

        cin.ignore(); // Membersihkan newline yang masih tersisa di buffer
    }
    cout << " "<< endl;

    // Menampilkan informasi sebelum diurutkan
    cout << "Sebelum diurutkan:" << endl;
    cout << "Nama: ";
    for (const string &name : nama) {
        cout << name << " ";
    }
    cout << " "<< endl;

    cout << "Nilai Agama: ";
    for (int nilai : nilaiAgama) {
        cout << nilai << " ";
    }
    cout << endl;

    // Menggunakan metode sort untuk mengurutkan nama dan nilai agama secara terpisah
    sort(nama.begin(), nama.end());
    sort(nilaiAgama.begin(), nilaiAgama.end());

    // Menampilkan informasi setelah diurutkan
    cout << "\nSetelah diurutkan:" << endl;
    cout << "Nama yang diurutkan: ";
    for (const string &name : nama) {
        cout << name << " ";
    }
    cout << " "<< endl;

    cout << "Nilai Agama yang diurutkan: ";
    for (int nilai : nilaiAgama) {
        cout << nilai << " ";
    }
    cout << endl;

    return 0;
}