# TUGAS-UAS-ALGORITMA
**Anggota Kelompok :**

1. MUMTAZ FIKRI NAZRULLAH (32602300002) bertugas membantu struktur data SORT dan video tutorialnya
2. FAIZAL IMAM SAFANGAT (32602300019) bertugas membuat struktur data LINKED LIST dan video tutorialnya
3. M. MALIKUS SHALEH (32602300021) bertugas membantu struktur data GRAPH dan video tutorialnya
4. MOHAMMAD BAYAN ALDINA (32602300024) bertugas membantu struktur data TREE dan video tutorialnya
5. NAYLA ALVIN (32602300030) bertugas editing dan meng-upload video ke YouTube
6. NOVI MUTIARA SARI (32602300032) bertugas membuat dan editing repository GitHub


**PENJELASAN PROGRAM :**

# A. LINKED LIST
[https://youtu.be/JFeNV2xQdD0?si=xiEsA4ECsT-xOGcD]

Pada program linked list ini yaitu membuat simulasi perbankan, pada simulasi ini menggunakan program Bahasa c++ dalam Bahasa tersebut banyak data yang harus disusun yang pertama menggunakan tipe data int dan string yang digunakan untuk menyimpan data bilangan bulat dan sebuah kata atau kalimat dan tipe data tersebut disimpan kedalam struct node agar lebih rapi. Kemudian ada void insert(void adalah fungsi yang tidak mengembalikan nilai) dalam program ini void insert adalah untuk menambahkan data nasabah yang akan dimasukkan. Kemudian ada void del berfungsi untuk menghapus data nasabah. Void dis yaitu void display yang berguna untuk menampilkan data nasabah yang telah terdaftar. Void cari yaitu untuk mencari data yang diinputkan dengan beberapa syarat misalnya dengan masukkan no rekening maka akan ditampilkan data yang dicari. Void transaksi yaitu berfungsi untuk melakukan transaksi berupa penarikan uang atau pengisian saldo. Void cek berfungsi untuk mengecek sisa saldo yang ada pada rekening nasabah. Kemudian yang terakhir yaitu int main adalah main program utama yang berfungsi menjalankan semua program void diatas.

Cara pengunaan aplikasinya adalah dengan cara dijalankan menggunakan aplikasi software yang sesuai misalnya Devc++, visual studio code, dll. Setelah membuka dengan software tersebut maka jalankan program tersebut dengan run setelah itu inputkan programnya sesuai dengan yang kita mau.

# B. TREE
[https://youtu.be/zaqwwcPA4jQ?si=SUV8pR42tMiJJgEY]

Mengaplikasikan membuat program pengelompokan UAS Algoritma

1. Membuat Kelas Anggota :

		class Anggota { public: string nama; string jabatan; vector struktur;

Kelas ‘Anggota’ dibuat sebagai ‘public’ agar proses pendeklarasian dapat diakses dari luar kelas. Dalam kelas ‘Anggota’ kita membuat variabel ‘nama’ dan ‘jabatan’ dengan menggunakan tipe data string yang nantinya variabel ‘nama’ digunakan untuk menyimpan nama-nama struktur keanggotaan kelompok dan variabel ‘jabatan’ untuk menyimpan jabatan dari nama-nama struktur keanggotaan tersebut. Kemudian variabel ‘struktur’ berupa vektor keanggotaan dibawahnya.

2. Konstruktor ‘Anggota’ Anggota(const string& dataNama, const string& dataJabatan): nama(dataNama), jabatan(dataJabatan){}

		void tambahStruktur(const Anggota& bagan){ struktur.push_back(bagan); }
	
		void tampilkanBagan(int org = 0) const { for(int i = 0; i < org; i++){ cout << " "; }
	
		cout << "* " << jabatan << " " << nama << endl;
	
		for(const auto& Anggota : struktur){
	 	   Anggota.tampilkanBagan(org + 1);
		}
		} };

Konstruktor ‘Anggota’ yang digunakan untuk menganalisis nama-nama sruktur keanggotaan kelompok, fungi tambahStruktur untuk menambahkan anggota bawahan kedalam vektor dan fungsi tampilkanBagan digunakan untuk menampilkan struktur bagan dalam bentuk hierarki yang memberikan identitas berdasarkan tingkatan dalam hierarki. Pada bagian 		rekursi, perubahan dilakukan dari struktur.tampilkanBagan(org + 1) menjadi anggota.tampilkanBagan(org + 1) dilakukan karena untuk menggunakan variabel anggota harus 			melakukan iterasi pada vektor struktur didalam fungsi masing-masing. Dengan melakukan perubahan tersebut, program akan menjalankan tanpa kesalahan dan akan menampilkan struktur keanggotaan dalam bentuk hierarki sesuai yang ada pada fungsi main nanti.

	3. Fungsi ‘main’ int main(){

		Anggota ketua1("M. Malikus Shaleh", "Ketua :"); ketua1.tambahStruktur(Anggota("Faizal Imam Safangat\n", "Wakil Ketua :")); Anggota sekretaris("Nayla Alvin", "Sekretaris 1 	:"); sekretaris.tambahStruktur(Anggota("Novi Mutiara Sari\n", "Sekretaris 2 :")); Anggota anggotaKel1("M. Bayan Aldina", "Anggota 1 :"); Anggota anggotaKel2("Mumtaz Fikri 	N.\n", "Anggota 2 :");
	
		ketua1.tambahStruktur(sekretaris); ketua1.tambahStruktur(anggotaKel1); ketua1.tambahStruktur(anggotaKel2);
	
		Anggota ketua2("M. Yanuar Anshori", "Ketua :"); ketua2.tambahStruktur(Anggota("Fahad", "Anggota 1 :")); ketua2.tambahStruktur(Anggota("Lia Rahma", "Anggota 2 :")); 				ketua2.tambahStruktur(Anggota("Wahid Sandi Pujo", "Anggota 3 :")); ketua2.tambahStruktur(Anggota("Alif Naufal\n", "Angoota 4 :"));
	
		Anggota ketua3("Faisal Anwar", "Ketua :"); ketua3.tambahStruktur(Anggota("Naufal Fairuzaj", "Anggota 1 :")); ketua3.tambahStruktur(Anggota("Navilla", "Anggota 2 :")); 			ketua3.tambahStruktur(Anggota("Silviyana", "Anggota 3 :")); ketua3.tambahStruktur(Anggota("Fitri Nur\n", "Angoota 4 :"));
	
		Anggota ketua4("Emilul Fata", "Ketua :"); ketua4.tambahStruktur(Anggota("Rirqi Nu'man Hakim", "Anggota 1 :")); ketua4.tambahStruktur(Anggota("Bintang", "Anggota 2 :")); 		ketua4.tambahStruktur(Anggota("Haydar Fahri", "Anggota 3 :")); ketua4.tambahStruktur(Anggota("Raffy Akhsan\n", "Angoota 4 :"));
	 Anggota ketua5("Ilyas", "Ketua :"); ketua5.tambahStruktur(Anggota("Mahesa", "Anggota 1 :")); ketua5.tambahStruktur(Anggota("Andika", "Anggota 2 :")); 			ketua5.tambahStruktur(Anggota("Ivan", "Anggota 3 :")); ketua5.tambahStruktur(Anggota("Fania Agustina\n", "Angoota 4 :"));
	  Anggota ketua6("Alek Hidayatullah", "Ketua :"); ketua6.tambahStruktur(Anggota("Syarif Hidayatulah", "Anggota 1 :")); ketua6.tambahStruktur(Anggota("Veri Ramadhan",         "Anggota 2 :")); ketua6.tambahStruktur(Anggota("Zainal Fattah", "Anggota 3 :")); ketua6.tambahStruktur(Anggota("Syaifudin\n", "Angoota 4 :")); cout << "Kelompok UAS Algoritma dan Struktur Data SMT Gasal Th. 2023/2024\n" << endl; cout << "Kelompok 1 :" << endl; ketua1.tampilkanBagan(); cout << "Kelompok 2 :" << endl; ketua2.tampilkanBagan(); cout << "kelompok 3 :" << endl; ketua3.tampilkanBagan(); cout << "Kelompok 4 :" << endl; ketua4.tampilkanBagan(); cout << "Kelompok 5 :" << endl;    ketua5.tampilkanBagan(); cout << Kelompok 6 :" << endl; ketua6.tampilkanBagan();
	
	    return 0; }

Dalam fungsi main yang menggunakan tipe data integer kita membuat objek Anggota untuk mempresentasikan struktur keanggotaan kelompok, Program aplikasi yang kita buat merupakan pengelompokan anggota dalam uas algoritma dan struktur data kali ini, dengan menggunakan program C++ dan dibuat secara dinamis. Terdapat enam kelompok dimana masing-masing kelompok terdiri dari lima orang keanggotaan di lima kelompok dan enam orang keanggotaan di satu kelompok. Kelompok kita yang terdiri dari enam orang diimplementasikan dalam struktur hierarki yang terdiri dari ketua yang mempunyai asisten wakil ketua dan sekretaris 1 yang mempunyai asisten sekretaris 2, kemudian para anggota 1 dan anggota 2 yang disejajarkan dengan wakil ketua dan sekretaris 1 dimana akan langsung dibawah kepemimpinan ketua. Kemudian kelompok lain yang akan disetarakan dan kita hanya membuat kelompok 2-6 berstrukturkan ketua dan 4 orang anggota. Selanjutnya program akan menampilkan struktur keanggotaan yang sudah dibuat sebelumnya dalam bentuk hierarki pada fungsi tampilkanBagan()pada akhir program dengan pendeklarasian pada masing masing kelompoknya.

# C. GRAPH
[https://youtu.be/QwEjRy8gUuw?si=O1fP-tLjFDpSHvnT]

Membuat rute perjalanan Dalam program kami menggunkan 3 library yaitu : Disini kami menggunakan tipe data integer

1. mask, mask saya representasikan untuk menandai kecamattan yang sudah saya kunjungi
2. pos, pos saya gunakan untuk mempertimbangkan kecamatan yang sedang saya kunjungi
3. n, n sendiri hanya untuk jumlah kota yang akan saya kunjungi
4. dist saya gunakan untuk matriks jarak antar kecamatan Dan yang terakhir yaitu dp, dp saya gunakan untuk menyimoan hasil memioisasinya

Fungsi if ini saya gunakan untuk mengecek jika semua kecamtan sudah saya kunjungi dan mengembalikannya ke kecamatan awal Fungsi if ini juga saya gunakan untuk memeriksa apakah mask dan pos ini sudah pernah dhitung atau belum, jika sudah maka akan langsung dikembalikan Fungsi pengulangan for tersebut saya gunakan untuk menghitung jarak semua kecamatan yang belum dikunjungi, untuk setiap kecamatan yang belum dikunjungi akan dihitung sebagai jalur baru dengan menambahkan jarak dari kecamatan saat ini ke kecamatan yang belum dikunjungi, nilai minimum dari perhitungan jalur-jalur ini akan menjadi jawaban dari jalur terdekat Setelah menghitungnya, Langkah selanjutnya yang saya lakukan adalah menyimpannya dalam dp dan mengembalikan nilai dari jawabannya.

Saya akan menjelaskan fungsi dari int main berikut

1. kita memasukkan jumlah kecamatan
2. setelah itu kita membuat matriks antar kecamatan dengan variable “dist”
3. setelah itu kita masukkan jumlah dari jalur yang akan dilewati
4. membuat matriks memoisasi
5. kita membuat variable mindist yang didalamnya ada fungsi tsp yang digunakan untuk menghitung jarak terpendek
6. menampilkan hasil dari mindist

# D. SORT
[https://youtu.be/jGY4ZXkaYf4?si=ilf6qVB_5sk-a2Xi] 

Metode sort adalah suatu algoritma yang digunakan untuk mengurutkan elemen-elemen suatu kumpulan data. Tujuan utama dari pengurutan ini adalah untuk menyusun elemen-elemen data tersebut menjadi urutan tertentu, seperti dalam urutan numerik atau abjad. Pengurutan mempermudah pencarian dan pengelolaan data, dan ada berbagai metode sort yang digunakan tergantung pada kebutuhan dan karakteristik data yang diurutkan.

1. Header Includes : Dalam pemrograman, "Header Includes" merujuk pada baris-baris kode yang memasukkan atau menyertakan file-file header ke dalam program. Header files adalah file teks yang berisi deklarasi fungsi, variabel, dan informasi lain yang diperlukan oleh program. Dengan memasukkan header files, program dapat mengakses definisi-definisi ini tanpa perlu menulis ulang kode secara lengkap. Contohnya seperti : Program menggunakan beberapa library standar C++, seperti , , , dan . Library digunakan untuk memanfaatkan metode sort.

2. Namespace Declaration : using namespace std adalah sintaks dalam bahasa pemrograman C++ yang digunakan untuk memberi tahu kompilator bahwa kita akan menggunakan semua anggota (fungsi, kelas, dll.) yang didefinisikan dalam namespace std (yang merupakan bagian dari Standar C++ Library).

3. Constant and Vector Declaration: Dalam pemrograman, "Constant Declaration" merujuk pada proses mendeklarasikan dan mendefinisikan nilai konstan atau konstanta. Konstanta adalah nilai yang tetap dan tidak dapat diubah selama jalannya program. Penggunaan konstanta berguna untuk membuat kode lebih jelas, mudah dipahami, dan menghindari kesalahan karena perubahan yang tidak disengaja pada nilai-nilai yang seharusnya tetap konstan. Dalam berbagai bahasa pemrograman, ada cara-cara berbeda untuk mendeklarasikan konstanta. Sebagai contoh, dalam bahasa pemrograman C dan C++, Anda dapat menggunakan kata kunci const untuk mendeklarasikan konstanta. • jumlahData adalah konstanta yang menyimpan jumlah data yang diinginkan. Sedangkan dalam pemrograman, "Vector Declaration" merujuk pada proses mendeklarasikan dan mendefinisikan struktur data vector. Vector adalah suatu jenis struktur data dinamis yang memungkinkan penyimpanan dan pengelolaan kumpulan elemen dengan ukuran yang dapat berubah secara dinamis. Vector umumnya terdapat dalam berbagai bahasa pemrograman, dan memiliki nama yang berbeda-beda tergantung pada bahasa pemrograman yang digunakan. • nama adalah vektor untuk menyimpan nama anggota kelompok. • nilaiAgama adalah vektor untuk menyimpan nilai agama dari anggota kelompok.

4. Group Information Display: "Group Information Display" umumnya merujuk pada tampilan atau presentasi informasi yang dikumpulkan atau diorganisir dalam kelompok atau grup tertentu. Ini bisa merujuk pada berbagai konteks tergantung pada bidang atau domain aplikasinya. Seperti kode ini Menampilkan informasi nama-nama anggota kelompok

5. Data Input Loop: "Data Input Loop" merujuk pada proses pengulangan atau iterasi yang digunakan untuk menerima atau mengambil input dari pengguna secara berulang. Loop ini memungkinkan program untuk terus menerima data masukan tanpa harus menulis kembali blok kode input setiap kali. Pengulangan ini terus berlanjut hingga kondisi tertentu terpenuhi, misalnya • Menggunakan loop for untuk meminta pengguna memasukkan nama dan nilai agama sebanyak jumlahData . • Menggunakan getline(cin, namaInput) untuk membaca input nama yang mungkin mengandung spasi. • Menggunakan cin >> nilaiAgamaInput untuk membaca input nilai agama.

6. Displaying Information Before Sorting: "Displaying Information Before Sorting" merujuk pada tindakan menampilkan atau menampilkan informasi sebelum melakukan pengurutan data. Dalam konteks pemrograman atau pengolahan data, ini berarti menampilkan nilai-nilai atau rekaman data sebelum proses pengurutan dilakukan.

7. Sort : Fungsi sort dari pustaka digunakan untuk mengurutkan vektor nama dan nilaiAgama. Dalam konteks ini, "nama" dan "nilaiAgama" adalah dua vektor berisi informasi tentang nama dan nilai Agama dari sejumlah individu atau objek dalam program.

8. Displaying Information After Sorting: "Displaying Information After Sorting" merujuk pada tindakan menampilkan atau menampilkan informasi setelah suatu data diurutkan. Ini umumnya terjadi dalam konteks pemrograman atau pengolahan data ketika kita telah melakukan operasi pengurutan pada suatu kumpulan data, dan kita ingin melihat hasilnya setelah proses pengurutan selesai.

9. Return: Dalam pemrograman, "Return " adalah suatu pernyataan yang digunakan untuk mengembalikan nilai dari suatu fungsi. Fungsi adalah blok kode yang memiliki tujuan tertentu, dan saat fungsi telah menyelesaikan tugasnya, nilai kembalian dapat dihasilkan dan dikembalikan ke tempat di mana fungsi itu dipanggil. Pernyataan return juga berfungsi untuk mengakhiri eksekusi dari suatu fungsi.
