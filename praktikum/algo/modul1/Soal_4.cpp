// Nama: Muhammad Jiwa Wira Tomo
// NIM: 2511512002
// Prodi: Teknik Komputer
// Soal: Buatlah kode program C++ sederhana yang mendeklarasikan dua variabel m= 82 dan n = 26, lalu tampilkan hasil penjumlahan, pengurangan,perkalian, dan pembagiannya ke layar.
#include <stdio.h>
double penjumlahan(double* a, double* b);
double pengurangan(double* a, double* b);
double perkalian(double* a, double* b);
double pembagian(double& a, double& b);
int main() {
	double m = 82;
	double n = 26;
	for(;;) {
		printf("=============================\n");
		printf("1.Penjumlahan\n");
		printf("2.pengurangan\n");
		printf("3.perkalian\n");
		printf("4.pembagian\n");
		printf("0.Keluar program\n");
		printf("Pilihanmu: ");
		int pilihan;
		scanf("%d", &pilihan);
		switch(pilihan) {
			case 1:
				printf("=============================\n");
				printf("Hasil penjumlahan: %lf\n", penjumlahan(&m,&n));
				continue;
			case 2:
				printf("=============================\n");
				printf("Hasil pengurangan: %lf\n", pengurangan(&m,&n));
				continue;
		
			case 3:
				printf("=============================\n");
				printf("Hasil perkalian: %lf \n", perkalian(&m,&n));
				continue;
			case 4:
				printf("=============================\n");
				printf("Hasil pembagian: %lf \n", pembagian(m,n));
				continue;
			default:
				printf("Sampai Jumpa Lagi!\n");
				return 0;
			}
		}
}

double penjumlahan(double* a, double* b) {
	return *a+*b;
}
double pengurangan(double* a, double* b) {
	return *a-*b;
}
double perkalian(double* a, double* b) {
	return *a**b;
}
double pembagian(double& a, double& b) {
	return a/b;
}

// HARAP NYALAKAN WORD WARP / LINE WARPING AGAR TEKS DIBAWAH LEBIH MUDAH DIBACA!
// Pada program ini saya melakukan menggunakan skema menggunakan mainloop atau biasa dikenal dengan listener, agar programnya lebih menarik dan interaktif, jadi dengan mainloop kita dapat melakukan interaksi pengecekan terus menerus kepada user, sampai user memasukkan input untuk keluar dari program kita, dengan begitu program dapat digunakan terus menerus untuk setiap fungsinya tanpa harus mengeksekusi dari awal programnya. selain itu saya menggunakan tipe data double agar mendapatkan hasil yg lebih presisi pada satuan desimal
