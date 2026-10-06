#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int a;
    int b;
    int hasil;

    cout << "Masukkan nilai a : ";
    cin >> a;
    cout << "Masukkan nilai b : ";
    cin >> b;
    
    hasil =a%b;

    cout << "Hasil pembagian : " << hasil << "\n";
    return 0;

}