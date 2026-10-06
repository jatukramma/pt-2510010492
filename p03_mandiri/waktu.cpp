#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int second =1600;
    int b = 60;

    int jam= ((second/b)/b)%b;
    int menit=(second/b)%b;
    int detik=second%b;
    cout << "Hasil konversi:\n";
    cout << "Jam   : " << setw(2) << setfill('0') << jam << "\n";
    cout << "Menit : " << setw(2) << setfill('0') << menit << "\n";
    cout << "Detik : " << setw(2) << setfill('0') << detik << "\n";
    return 0;
}
