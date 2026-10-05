#include <iostream>
#include <iomanip>

int main() {
    int nilai {87.5};
    std::cout << "Nilai : " << std::fixed << std::setprecision(2) << nilai << "\n";
    return 0;
}