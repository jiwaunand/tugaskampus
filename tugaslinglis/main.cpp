#include <iostream> // Use Std Librray
#include "Linkedlist.h" // Include the linked list header
#include <limits>
using namespace std;

void showMenu() {
    cout<<"======== Program Linkedlist ========"<<endl;
    cout<<"1.Tampilkan Linkedlist saat ini"<<endl;
    cout<<"2.Tambah Depan"<<endl;
    cout<<"3.Tambah Belakang"<<endl;
    cout<<"4.Tambah tengah"<<endl;
    cout<<"5.Hapus Depan"<<endl;
    cout<<"6.Hapus Tengah"<<endl;
    cout<<"7.Hapus Belakang"<<endl;
    cout<<"0.Exit"<<endl;
}

int main() {
    Linkedlist list;
    int bufferInput, BufferData, Bufferposition;
    if (list.head == nullptr) {
        cout << "\033[2J\033[H";
        cout<<"Masukkan data pertama: ";
        cin>>BufferData;
        list.insertHead(BufferData);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    while(0==0) {
        cout << "\033[2J\033[H";
        showMenu();
        cout<<"Masukkan pilihan: ";
        cin>>bufferInput;

        if (bufferInput == 0) {
            cout << "\033[2J\033[H";
            cout<<"Goodbye!"<<endl;
            return 0;
        } else if (bufferInput == 1) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\033[2J\033[H";
            list.printingLinkedlist();
            cout<<endl;
            cout<<"Tekan apasaja untuk Kembali"<<endl;
            cin.get();
        } else if (bufferInput == 2) {
            cout << "\033[2J\033[H";
            cout<<"Masukkan integer yang ingin ditambahkan: ";
            cin>>BufferData;
            list.insertHead(BufferData);
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"Tekan apasaja untuk Kembali"<<endl;
            cin.get();
        } else if (bufferInput == 3) {
            cout << "\033[2J\033[H";
            cout<<"Masukkan integer yang ingin ditambahkan: ";
            cin>>BufferData;
            list.insertTail(BufferData);
            cout<<"Tekan apasaja untuk Kembali"<<endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
        } else if (bufferInput == 4) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\033[2J\033[H";
            cout<<"Masukkan integer yang ingin ditambahkan: ";
            cin>>BufferData;
            cout<<"Position yang ingin diselipkan: ";
            cin>>Bufferposition;
            list.insertMiddle(BufferData, Bufferposition);
            cout<<endl;
            cout<<"Tekan apasaja untuk Kembali";
            cin.get();
        } else if (bufferInput == 5) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\033[2J\033[H";
            list.deleteHead();
            cout<<endl;
            cout<<"Tekan apasaja untuk Kembali";
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
