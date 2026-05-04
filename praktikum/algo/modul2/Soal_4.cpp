// Nama: Muhammad Jiwa Wira Tomo
// NIM: 2511512002
// Prodi: Teknik Komputer

// Setup C++ Standar Library
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Fungsi untuk menampilkan menu makanan
void showMakananMenu() {
	cout<<"========================================================\n";
	cout<<"Silahkan pilih makanan (Tuliskan Nomor): \n";
	cout<<"1.Nasi Goreng: Rp.10.000 \n";
	cout<<"2.Mie Rebus: Rp.8.000 \n";
	cout<<"3.Ayam Goreng: Rp.12.000 \n";
	cout<<"0.Selesai \n";
}
// Fungsi untuk menampilkan menu minuman
void showMinumanMenu() {
	cout<<"=======================================================\n";
	cout<<"Silahkan pilih minuman(Tuliskan Nomor): \n";
	cout<<"1.Es Teh: Rp.5.000 \n";
	cout<<"2.Jus Jeruk: Rp.7.000 \n";
	cout<<"3.Extrajooss Susu: Rp.6.000 \n";
	cout<<"0.Selesai \n";
}

// Main Function
int main () {
	// Inisiasi untuk pertanyaan di pilihan 3
	char y;
	
	// Inisiasi handler pilihan
	int short p, pmakanan, pminuman;
	
	// inisiasi jumlah barang awal
	int jumlah_nasi_g = 0; 
	int jumlah_mie_r = 0; 
	int jumlah_ayam_g = 0;
	int jumlah_es_t = 0;
	int jumlah_jus_j = 0;
	int jumlah_extra_j = 0;
	
	// Inisiasi harga makanan
	int total_nasi_g, total_mie_r, total_ayam_g;
	
	// Inisiasi harga minuman
	int total_es_t, total_jus_j, total_extra_j;
	
	// Inisisasi biaya seluruh
	int long total_semesta = 0;
	
	// Mainloop
	for(;;) {
		cout<<"====================================================\n";
		cout<<"Selamat datang di aplikasi pemesanan \n";
		cout<<"1.Pilih makanan\n";
		cout<<"2.Pilih minuman\n";
		cout<<"3.Totalkan biaya\n";
		cout<<"0.Keluar\n";
		cout<<"Silahkan Pilih aksi: ";
		cin>>p;
		
		// Loop untuk switch case handler, untuk menghandle menu pilihan makanan dan minuman
		for(;;) {
			switch (p) {
				
				// Bagian memilih makanan
				case 1:
				showMakananMenu();
				cout<<"Pilihan mu: ";
				cin>>pmakanan;
				if(pmakanan==1) {
					jumlah_nasi_g++;
				} else if (pmakanan==2) {
					jumlah_mie_r++;
				} else if (pmakanan==3) {
					jumlah_ayam_g++;
				} else {
					p=-1;
				}
				break;
				
				// Bagian memilih minuman
				case 2:
				showMinumanMenu();
				cout<<"Pilihan mu: ";
				cin>>pminuman;
				if(pminuman==1) {
					jumlah_es_t++;
				} else if (pminuman==2) {
					jumlah_jus_j++;
				} else if (pminuman==3) {
					jumlah_extra_j++;
				} else {
					p=-1;
				}
				break;
				
				// Bagian pentotalan
				case 3:
				cout<<"=============================================\n";
				cout<<"Total Biaya Anda Adalah \n";
				
				// Area Makanan
				if(jumlah_ayam_g+jumlah_mie_r+jumlah_nasi_g != 0) {
					cout<<"===================Makanan===================\n";
					if(jumlah_nasi_g!=0) {
						total_nasi_g=jumlah_nasi_g*10;
						cout<<"1.Nasi Goreng: Rp.10.000 x"<<jumlah_nasi_g<<" = Rp."<<total_nasi_g<<".000"<<endl;
					}
					if(jumlah_mie_r!=0) {
						total_mie_r=jumlah_mie_r*8;	
						cout<<"2.Mie Rebus: Rp.8.000 x"<<jumlah_mie_r<<" = Rp."<<total_mie_r<<".000"<<endl;
					}
					if(jumlah_ayam_g!=0) {	
						total_ayam_g=jumlah_ayam_g*12;		
						cout<<"3.Ayam Goreng: Rp.12.000 x"<<jumlah_ayam_g<<" = Rp."<<total_ayam_g<<".000"<<endl;
					}
					cout<<"Total biaya untuk makanan = Rp."<<total_nasi_g+total_mie_r+total_ayam_g<<".000"<<endl;
				} else {
					cout<<"Anda Tidak memilih makanan apapun"<<endl;
				}
				
				// Area Minuman
				if(jumlah_es_t+jumlah_jus_j+jumlah_extra_j != 0) {
					cout<<"===================Minumman===================\n";
					if(jumlah_es_t!=0) {
						total_es_t=jumlah_es_t*5;	
						cout<<"1.Es Teh: Rp.5.000 x"<<jumlah_es_t<<" = Rp."<<total_es_t<<".000"<<endl;
					}
					if(jumlah_jus_j!=0) {
						total_jus_j = jumlah_jus_j*7;
						cout<<"2.Jus Jeruk: Rp.7.000 x"<<jumlah_jus_j<<" = Rp."<<total_jus_j<<".000"<<endl;
						
					}
					if(jumlah_extra_j!=0) {
						total_extra_j = jumlah_extra_j*6;
						cout<<"3.Extrajooss Susu: Rp.6.000 x"<<jumlah_extra_j<<" = Rp."<<total_extra_j<<".000"<<endl;
					}
					cout<<"Total biaya untuk minuman = Rp."<<total_es_t+total_jus_j+total_extra_j<<".000"<<endl;
				} else {
					cout<<"Anda Tidak memilih minuman apapun"<<endl;
				}
				
				// Total seluruh
				total_semesta = (total_es_t+total_jus_j+total_extra_j) + (total_nasi_g+total_mie_r+total_ayam_g);
				cout<<"==========================================="<<endl;
				cout<<"Total Biaya seluruhnya adalah =  Rp."<<total_semesta<<".000"<<endl;
				cout<<"Apakah ingin keluar program? (y/n): ";
				cin>>y;
				if(y=='y') {
					cout<<"goodbye, Program dibuat oleh jiwatomo, diupload official pada github.com/jiwaunand";
					return 0;
				} else {
					p=-1;
				}
				break;
				
				// Exit program
				default:
					cout<<"goodbye, Program dibuat oleh jiwatomo, diupload official pada github.com/jiwaunand";
					return 0;
			}
			
			// Exit sub menu
			if (p==-1) {
				break;
			}
		}
	}	
	return 0;
}
// HARAP AKTIFKAN WORD WARP ATAU LINE WARPING AGAR LEBIH MUDAH MEMBACA KOMENTAR DI BAWAH INI, TERIMAKASIH
// Program yang dapat menghandle dan memproses menu makanan dan minuman yang dipilih oleh user, secara garis besar program ini dibuat dengan paradigma Nested if. tetapi digabungkan oleh perulangan utama dan perulangan didalam perulangan atau yg biasa disebut Nested loop, gabungan antara kedua paradigma ini bertujuan untuk membuat sesuatu yang di sebut sub-menu, atau menu didalam menu, juga di bantu oleh sintaks switch case agar memsimplikasi program berjenis ini, atau yang menggunakan menu. program ini mampu menghandle sebanyak apapun menu yang dipilih oleh user sampai batas memori komputer. Program ini juga memiliki error check, atau input handler yang sudah lumayan lengkap, jadi setiap input pasti memiliki arah yang jelas, dan minim bug.
// Program diawali dengan melakukan importing c++ standart library iostream, lalu men set global variable atau inisasi variable apa saja yang akan digunakan, setelah itu langsung masuk ke menu utama (mainloop) untuk menampilkan menu secara terus menerus sampai input yang telah di tentukan oleh user, user lalu memilih salah satu di antara memilih makanan atau minuman, lalu akan masuk ke sub-menu, untuk memilih makanan atau minuman, sampai bisa keluar dari sub-menu jika memasukkan input 0. setelah itu melakukan proses pentotalan, dilakukan di dalam perulangan. dengan mengali total jumlah makanan atau minuman yang di pilih maka akan di dapat hasil biaya akhir, lalu user dapat memilih keluar atau kembali memasukkan pilihan lain.
// Program ini masih memiliki kekurangan yaitu pada fleksibilitan menambah menu, karena saya sebagi penulis kode menulis langsung menu apa saja yang ada di restoran itu, bukan menggunakan object, membuat program menjadi kurang fleksible jika ingin ditambahkan menu baru, programmer harus menulis ulang satu persatu logika yang dibutuhkan setiap menu, ini dapat dicegah dengan menggunakan pendekatan oop, karena pada oop terdapat konsep prototype, yang dapat dengan mudah menghandle ribuan bahkan tak higga data dengan mudah.
