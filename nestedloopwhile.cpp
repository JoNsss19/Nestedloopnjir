#include <iostream>

int main() {
    int tinggi, baris, kolom;
    std::cout << "Masukkan jumlah tinggi: ";
    std::cin >> tinggi;
    std::cout << std::endl;
    baris = 1;
    while (baris <= tinggi) {
        kolom = 1;
        while (kolom <= baris) {
            std::cout << "*";
            kolom++;
        }
        std::cout << std::endl;
        baris++;
    }
    return 0;
}