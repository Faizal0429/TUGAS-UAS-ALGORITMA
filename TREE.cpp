#include <iostream>
#include <vector>
using namespace std;

class Anggota {
public:
    string nama;
    string jabatan;
    vector<Anggota> struktur;

    Anggota(const string& dataNama, const string& dataJabatan): nama(dataNama), jabatan(dataJabatan){}

    void tambahStruktur(const Anggota& bagan){
        struktur.push_back(bagan);
    }

    void tampilkanBagan(int org = 0) const {
        for(int i = 0; i < org; i++){
            cout << " ";
        }
        cout << "* " << jabatan << " " << nama << endl;

        for(const auto& Anggota : struktur){
            Anggota.tampilkanBagan(org + 1);
        }
    }
};

int main(){

    Anggota ketua1("M. Malikus Shaleh", "Ketua :");
    ketua1.tambahStruktur(Anggota("Faizal Imam Safangat\n", "Wakil Ketua :"));
    Anggota sekretaris("Nayla Alvin", "Sekretaris 1 :");
    sekretaris.tambahStruktur(Anggota("Novi Mutiara Sari\n", "Sekretaris 2 :"));
    Anggota anggotaKel1("M. Bayan Aldina", "Anggota 1 :");
    Anggota anggotaKel2("Mumtaz Fikri N.\n", "Anggota 2 :");

    ketua1.tambahStruktur(sekretaris);
    ketua1.tambahStruktur(anggotaKel1);
    ketua1.tambahStruktur(anggotaKel2);

    Anggota ketua2("M. Yanuar Anshori", "Ketua :");
    ketua2.tambahStruktur(Anggota("Fahad", "Anggota 1 :"));
    ketua2.tambahStruktur(Anggota("Lia Rahma", "Anggota 2 :"));
    ketua2.tambahStruktur(Anggota("Wahid Sandi Pujo", "Anggota 3 :"));
    ketua2.tambahStruktur(Anggota("Alif Naufal\n", "Angoota 4 :"));

    Anggota ketua3("Faisal Anwar", "Ketua :");
    ketua3.tambahStruktur(Anggota("Naufal Fairuzaj", "Anggota 1 :"));
    ketua3.tambahStruktur(Anggota("Navilla", "Anggota 2 :"));
    ketua3.tambahStruktur(Anggota("Silviyana", "Anggota 3 :"));
    ketua3.tambahStruktur(Anggota("Fitri Nur\n", "Angoota 4 :"));

    Anggota ketua4("Emilul Fata", "Ketua :");
    ketua4.tambahStruktur(Anggota("Rirqi Nu'man Hakim", "Anggota 1 :"));
    ketua4.tambahStruktur(Anggota("Bintang", "Anggota 2 :"));
    ketua4.tambahStruktur(Anggota("Haydar Fahri", "Anggota 3 :"));
    ketua4.tambahStruktur(Anggota("Raffy Akhsan\n", "Angoota 4 :"));

    Anggota ketua5("Ilyas", "Ketua :");
    ketua5.tambahStruktur(Anggota("Mahesa", "Anggota 1 :"));
    ketua5.tambahStruktur(Anggota("Andika", "Anggota 2 :"));
    ketua5.tambahStruktur(Anggota("Ivan", "Anggota 3 :"));
    ketua5.tambahStruktur(Anggota("Fania Agustina\n", "Angoota 4 :"));

    Anggota ketua6("Alek Hidayatullah", "Ketua :");
    ketua6.tambahStruktur(Anggota("Syarif Hidayatulah", "Anggota 1 :"));
    ketua6.tambahStruktur(Anggota("Veri Ramadhan", "Anggota 2 :"));
    ketua6.tambahStruktur(Anggota("Zainal Fattah", "Anggota 3 :"));
    ketua6.tambahStruktur(Anggota("Syaifudin\n", "Angoota 4 :"));


    cout << "Kelompok UAS Algoritma dan Struktur Data SMT Gasal Th. 2023/2024\n" << endl;
    cout << "Kelompok 1 :" << endl;
    ketua1.tampilkanBagan();
    cout << "Kelompok 2 :" << endl;
    ketua2.tampilkanBagan();
    cout << "kelompok 3 :" << endl;
    ketua3.tampilkanBagan();
    cout << "Kelompok 4 :" << endl;
    ketua4.tampilkanBagan();
    cout << "Kelompok 5 :" << endl;
    ketua5.tampilkanBagan();
    cout << "Kelompok 6 :" << endl;
    ketua6.tampilkanBagan();

    return 0;
}
