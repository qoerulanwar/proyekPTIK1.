#include <iostream>
#include <string>
using namespace std;

struct Gunung {
    string nama;
    double tinggi;
    string lokasi;
    string tipeG;
    int tahun_letusan_terakhir;
    int total_letusan;
    string status;
};

int main() {
	  Gunung dataGunung[100];
    int count = 0;
    int input;

    // Inisialisasi contoh data gunung
    dataGunung[count++] = {"Gunung Merapi", 2911, "Yogyakarta, Jawa Tengah", "Stratovolcano", 2021, 5, "Aktif"};
    dataGunung[count++] = {"Gunung Rinjani", 3726, "Lombok, Nusa Tenggara Barat", "Stratovolcano", 2010, 3, "Aktif"};
    dataGunung[count++] = {"Gunung Bromo", 2329, "Jawa Timur", "Caldera", 2016, 2, "Aktif"};
    dataGunung[count++] = {"Gunung Kerinci", 3805, "Jambi", "Stratovolcano", 2019, 7, "Aktif"};
    dataGunung[count++] = {"Gunung Tambora", 2850, "Pulau Sumbawa, Nusa Tenggara Barat", "Stratovolcano", 1967, 4, "Non-Aktif"};

    while (true) {

        cout << "MENU" << endl;
        cout << "1. Input Data Gunung" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "3. Update Data Gunung" << endl;
        cout << "4. Hapus Data Gunung" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> input;

        if (input == 1 && count < 100) {
            // input data gunung
            cout << "Nama: ";
            cin >> dataGunung[count].nama;
            cout << "Tinggi: ";
            cin >> dataGunung[count].tinggi;
            cout << "Lokasi: ";
            cin >> dataGunung[count].lokasi;
            cout << "Tipe Gunung: ";
            cin >> dataGunung[count].tipeG;
            cout << "Tahun Letusan Terakhir: ";
            cin >> dataGunung[count].tahun_letusan_terakhir;
            cout << "Total Letusan: ";
            cin >> dataGunung[count].total_letusan;
            cout << "Status: ";
            cin >> dataGunung[count].status;

            count++;
        }
         else if (input == 2) {
            // tampilkan data
            if (count == 0) {
                cout << "Belum ada data gunung yang dimasukkan." << endl;
            }
            else {
                cout << "Data Gunung:" << endl;
                for (int i = 0; i < count; i++) {
                    cout << "Gunung " << i + 1 << endl;
                    cout << "Nama: " << dataGunung[i].nama << endl;
                    cout << "Tinggi: " << dataGunung[i].tinggi << endl;
                    cout << "Lokasi: " << dataGunung[i].lokasi << endl;
                    cout << "Tipe Gunung: " << dataGunung[i].tipeG << endl;
                    cout << "Tahun Letusan Terakhir: " << dataGunung[i].tahun_letusan_terakhir << endl;
                    cout << "Total Letusan: " << dataGunung[i].total_letusan << endl;
                    cout << "Status: " << dataGunung[i].status << endl << endl;
                }
            }
    }
}
  

    return 0;
}

