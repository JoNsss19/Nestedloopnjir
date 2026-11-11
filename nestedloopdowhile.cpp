#include <iostream>

int main() {
    int tinggi, baris, kolom;
    std::cout << "Masukkan jumlah tinggi: ";
    std::cin >> tinggi;
    std::cout << std::endl;
    baris = 1;
    do {
        kolom = 1;
        do {
            std::cout << "*";
            kolom++;
        } while (kolom <= baris);
        std::cout << std::endl;
        baris++;
    } while (baris <= tinggi);
    return 0;
}