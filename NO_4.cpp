#include <iostream>
#include <string>
using namespace std;

class RekeningBank {
private:
    
    string pemilik;
    double saldo;

public:
    RekeningBank(string pemilik, double saldoAwal) {
        this->pemilik = pemilik;
        this->saldo = saldoAwal;
    }

    void setoran(double jumlah) {
        saldo += jumlah;
        printf("Setoran berhasil. Saldo terkini: %.2f\n", saldo);
    }

    void penarikan(double jumlah) {
        if (jumlah > saldo) {
            printf("Penarikan gagal. Saldo tidak mencukupi.\n");
        } else {
            saldo -= jumlah;
            printf("Penarikan berhasil. Saldo terkini: %.2f\n", saldo);
        }
    }
};

int main() {
    // Membuat objek rekening bank
    RekeningBank rekening("Desty Laela", 10000);

    // Melakukan beberapa penyetoran dan penarikan uang
    rekening.setoran(2000);
    rekening.penarikan(1000);
    rekening.penarikan(3000); // penarikan gagal karena saldo tidak mencukupi

    return 0;
}
