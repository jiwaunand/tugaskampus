// Nama: Muhammad Jiwa Wira Tomo
// NIM: 2511512002
// Prodi: Teknik Komputer
#include <iostream>
using std::cout;
using std::cin;

int main () {
	int umur;
	cout<<"Masukkan umur anda: ";
	cin>>umur;
	
	if(umur<=12) {
		cout<<"\nAnda adalah anak-anak";
	} else if(umur<=17) {
		cout<<"\nAnda adalah Remaja";
	} else {
		cout<<"\nAnda adalah Dewasa";
	}
	return 0;
}

// program yang dapat mengelompokkan berdasarkan usianya
