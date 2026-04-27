// Nama: Muhammad Jiwa Wira Tomo
// NIM: 2511512002
// Prodi: Teknik Komputer
// Soal: Buatlah program C++ untuk menghitung Luas Segitiga program harus meminta input nilai Panjang alas dan tinggi segitiga dari user.
#include <stdio.h>
int main() {
	double alas;
	double tinggi;
	printf("Input Alas: ");
	scanf("%lf", &alas);
	printf("Input Tinggi: ");
	scanf("%lf", &tinggi);
	double hasil = (alas*tinggi)/2;
	printf("Hasil: %lf", hasil);
	return 0;
}
// HARAP NYALAKAN WORD WARP / LINE WARPING AGAR TEKS DIBAWAH LEBIH MUDAH DIBACA!
// Diawali dengan deklarasi variable yang ingin digunakan dan, melakukan pengambilan data dengan user, setelah itu dilanjutkan dengan proses perhitungan dan menampilkan hasil.
