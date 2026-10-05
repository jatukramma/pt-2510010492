// Lab porting: pindahkan rerata.py ke C++.
// Lengkapi tiga bagian bertanda TODO, lalu bangun dengan baseline kelas.
#include <iomanip>
#include <iostream>

int main() {
    int tugas = 80;
    int uts = 75;
    int uas = 90;
    int harian = 100;
    int praktek = 95;

    // TODO 1: hitung jumlah ketiga nilai. Di C++ tipe variabel wajib ditulis.
    int jumlah = tugas+uts+uas+harian+praktek;

    // TODO 2: hitung rata-rata. Ingat, int dibagi int membuang pecahannya.
    //         Pakai tipe double dan pastikan pembagiannya bukan pembagian bilangan bulat.
    double rerata = jumlah/5.0;

    // TODO 3: cetak hasil dengan dua angka di belakang koma, sama seperti versi Python.
    std::cout << "Jumlah    : " << jumlah << "\n";
    std::cout << "Rata-rata : " << std::fixed << std::setprecision(2) << rerata << "\n";
    return 0;
}
