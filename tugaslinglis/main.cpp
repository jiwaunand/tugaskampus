#include <iostream> // Use Std Librray
#include "Linkedlist.h" // Include the linked list header
#include <limits>
using namespace std;

int main() {
    Linkedlist list;
    int bufferInput;
    while(0==0) {
        cout << "\033[2J\033[H";
        cout<<"======== Program Linkedlist ========"<<endl;
        cout<<"1.Tampilkan Linkedlist saat ini"<<endl;
        cout<<"2.Tambah Depan"<<endl;
        cout<<"3.Tambah Belakang"<<endl;
        cout<<"4.Tambah tengah"<<endl;
        cout<<"5.Hapus Depan"<<endl;
        cout<<"6.Hapus Tengah"<<endl;
        cout<<"7.Hapus Belakang"<<endl;
        cout<<"0.Exit"<<endl;

        cin>>bufferInput;

        if (bufferInput == 0) {
            return 0;
        } else if (bufferInput == 1) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\033[2J\033[H";
            list.printingLinkedlist();
            cout<<endl;
            cout<<"Tekan apasaja untuk Kembali"<<endl;
            cin.get();
        } else if (bufferInput == 2) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\033[2J\033[H";
            list.printingLinkedlist();
            cout<<endl;
            cout<<"Tekan apasaja untuk Kembali"<<endl;
            cin.get();
        } else if (bufferInput == 3) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\033[2J\033[H";
            list.printingLinkedlist();
            cout<<endl;
            cout<<"Tekan apasaja untuk Kembali"<<endl;
            cin.get();
        } else if (bufferInput == 4) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\033[2J\033[H";
            list.printingLinkedlist();
            cout<<endl;
            cout<<"Tekan apasaja untuk Kembali"<<endl;
            cin.get();
        } else if (bufferInput == 5) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\033[2J\033[H";
            list.printingLinkedlist();
            cout<<endl;
            cout<<"Tekan apasaja untuk Kembali"<<endl;
            cin.get();
        } else if (bufferInput == 6) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\033[2J\033[H";
            list.printingLinkedlist();
            cout<<endl;
            cout<<"Tekan apasaja untuk Kembali"<<endl;
            cin.get();
        } else if (bufferInput == 7) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\033[2J\033[H";
            list.printingLinkedlist();
            cout<<endl;
            cout<<"Tekan apasaja untuk Kembali"<<endl;
            cin.get();
        } else {
            cout<<"Pilihan Tidak Ditemukan!"<<endl;
        }
    }
}
