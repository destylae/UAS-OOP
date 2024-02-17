#include <iostream>
#include <string>
using namespace std;

class Karyawan {
private:
    
    string nama;
    double gajiPerJam;
    double jamKerja;

public:
    Karyawan(string nama, double gajiPerJam, double jamKerja) {
        this->nama = nama;
        this->gajiPerJam = gajiPerJam;
        this->jamKerja = jamKerja;
    }

    double hitungGajiTotal() {
        return gajiPerJam * jamKerja;
    }
};

int main() {
    // Membuat objek karyawan
    Karyawan karyawan("Desty Laela", 250, 10);

    // Menampilkan total gaji karyawan
    printf("Total gaji karyawan: %.2f\n", karyawan.hitungGajiTotal());

    return 0;
}