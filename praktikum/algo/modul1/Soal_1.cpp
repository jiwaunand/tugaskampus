// Nama: Muhammad Jiwa Wira Tomo
// NIM: 2511512002
// Prodi: Teknik Komputer
// Soal: Buatlah sebuah program C++ yang menampilkan biodata singkat Anda (Nama, NIM, dan Jurusan)

// Importing
#include <stdio.h>
#include <string>

// Set namespace
using std::string;

// Class Mahasiswa
class Mahasiswa {
	
  private:
    string name;
    string jurusan;
    string nim;
  public:
    void setName(const string& a) {
      name = a;
    }
    void setJurusan(const string& a) {
      jurusan = a;
    }
    void setNIM(const string& a) {
      nim = a;
    }
    string getName() {
      return name;
    }
    string getJurusan() {
      return jurusan;
    }
    string getNIM() {
      return nim;
    }

};

// Main Function
int main() {
  Mahasiswa jiwa;
  jiwa.setName("Muhammad Jiwa Wira Tomo");
  jiwa.setJurusan("Teknik Komputer");
  jiwa.setNIM("2511512002");
  for(int i=0;i<3;i++) {
    for(int j=0;j<3;j++) {
      switch (i) {
        case 0:
          if(j==0) {
				printf("Nama");
          } else if (j==2) {
				printf("%s", jiwa.getName().c_str());
          } else {
				printf(":");
          }
          break;
        case 1:
          if(j==0) {
				printf("NIM");
          } else if (j==2) {
				printf("%s", jiwa.getNIM().c_str());
          } else {
				printf(":");
          }
          break;
        case 2:
          if(j==0) {
				printf("Jurusan");
          } else if (j==2) {
				printf("%s", jiwa.getJurusan().c_str());
          } else {
				printf(":");
          }
          break;
      }
    }
    printf("\n");
  }
  getchar();
  return 0;
}

// HARAP NYALAKAN WORD WARP / LINE WARPING AGAR TEKS DIBAWAH LEBIH MUDAH DIBACA!
// Pada program ini, akan menghasilkan output dari object jiwa dari class mahasiswa, setiap object dari mahasiswa memiliki properties yoitu string name, string nim, dan string jurusan, ditampilkan satu persatu dengan Nested loop untuk masing masing bagian.
// Program ini diawali dengan proses importing standar library. yaitu stdio.h, stdio.h adalah header file sederhana untuk menggunakan fungsi print dan getchar sebagai i/o dari program kita. lalu dilanjutkan dengan mengimport standarlib string agar dapat memproses string pada program ini.lalu dilanjutkan sintak using agar memudahkan penggunaan namespace pada program ini. setelah itu saya mendeklarasikan class Mahasiswa, sebagai prototype atau class yang akan saya gunakan pada program ini, class ini berisi properties string name, string nim, dan string jurusan. dengan menggunakan enkapsulasi, maka saya menambahkan sintak private: dan public: dan mensetup class method setter dan getter untuk setiap objectnya nanti

