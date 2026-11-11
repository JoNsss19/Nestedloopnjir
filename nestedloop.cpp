#include <iostream>

int baris, kolom, tinggi;

void getTinggi() {
    std::cout << "Masukkan jumlah tinggi: ";
    std::cin >> tinggi;
}

void exitMenu() {
    char choice;
    std::cout << "back to menu [y/Y] : " << std::endl;
    std::cin >> choice;
    std::cin.ignore();
    if (choice == 'y' || choice == 'Y') {
        system("cls");
    } else {
        system("cls");
    }
}

void nested1 () {
    getTinggi();

    for (baris = 1; baris <= tinggi; baris++) {
        for (kolom = 1; kolom <= baris; kolom++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void nested2() {
    getTinggi();

    for (baris = 1; baris <= tinggi; baris++) {
        for (kolom = tinggi; kolom >= baris; kolom--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void nested3() {
    getTinggi();

    for (baris = 1; baris <= tinggi; baris++) {
        for (kolom = tinggi; kolom > baris; kolom--) {
            std::cout << " ";
        }
        for (kolom = 1; kolom <= baris; kolom++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void nested4() {
    getTinggi();

    for (baris = 1; baris <= tinggi; baris++) {
        for (kolom = 1; kolom < baris; kolom++) {
            std::cout << " ";
        }
        for (kolom = tinggi; kolom >= baris; kolom--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void nested5() {
    getTinggi();

    for (baris = 1; baris <= tinggi; baris++) {
        for (kolom = tinggi; kolom > baris; kolom--) {
            std::cout << " ";
        }
        for (kolom = 1; kolom <= baris*2-1; kolom++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void nested6() {
    getTinggi();

    for (baris = 1; baris <= tinggi; baris++) {
        for (kolom = 1; kolom < baris; kolom++) {
            std::cout << " ";
        }
        for (kolom = tinggi; kolom >= baris*2-tinggi; kolom--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void nested7() {
    getTinggi();

    for (baris = 1; baris <= tinggi; baris++) {
        for (kolom = 1; kolom <= baris; kolom++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (baris = 2; baris <= tinggi; baris++) {
        for (kolom = tinggi; kolom >= baris; kolom--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void nested8() {
    getTinggi();

    for (baris = 1; baris <= tinggi; baris++) {
        for (kolom = tinggi; kolom > baris; kolom--) {
            std::cout << " ";
        }
        for (kolom = 1; kolom <= baris; kolom++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (baris = 2; baris <= tinggi; baris++) {
        for (kolom = 1; kolom < baris; kolom++) {
            std::cout << " ";
        }
        for (kolom = tinggi; kolom >= baris; kolom--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void nested9() {
    getTinggi();

    for (baris = 1; baris <= tinggi; baris++) {
        for (kolom = tinggi; kolom > baris; kolom--) {
            std::cout << " ";
        }
        for (kolom = 1; kolom <= baris*2-1; kolom++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (baris = 2; baris <= tinggi; baris++) {
        for (kolom = 1; kolom < baris; kolom++) {
            std::cout << " ";
        }
        for (kolom = tinggi; kolom >= baris*2-tinggi; kolom--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int pilihan;
    menu:
    std::cout<<"================="<<std::endl;
    std::cout<<"1.nested 1"<<std::endl;
    std::cout<<"2.nested 2"<<std::endl;
    std::cout<<"3.nested 3"<<std::endl;
    std::cout<<"4.nested 4"<<std::endl;
    std::cout<<"5.nested 5"<<std::endl;
    std::cout<<"6.nested 6"<<std::endl;
    std::cout<<"7.nested 7"<<std::endl;
    std::cout<<"8.nested 8"<<std::endl;
    std::cout<<"9.nested 9"<<std::endl;
    std::cout<<"10.Exit/Keluar"<<std::endl;
    std::cout<<"================="<<std::endl;
    std::cout<<"Masukkan Pilihan Anda : ";
    std::cin>> pilihan;
    system("cls");
    
    if (pilihan == 1) {
        nested1();
        tinggi = 0;
        exitMenu();
        goto menu;
    } else if (pilihan == 2) {
        nested2();
        tinggi = 0;
        exitMenu();
        goto menu;
    } else if (pilihan == 3) {
        nested3();
        tinggi = 0;
        exitMenu();
        goto menu;
    } else if (pilihan == 4 ) {
        nested4();
        tinggi = 0;
        exitMenu();
        goto menu;
    } else if (pilihan == 5) {
        nested5();
        tinggi = 0;
        exitMenu();
        goto menu;
    } else if (pilihan == 6) {
        nested6();
        tinggi = 0;
        exitMenu();
        goto menu;
    } else if (pilihan == 7) {
        nested7();
        tinggi = 0;
        exitMenu();
        goto menu;
    } else if (pilihan == 8) {
        nested8();
        tinggi = 0;
        exitMenu();
        goto menu;
    } else if (pilihan == 9) {
        nested9();
        tinggi = 0;
        exitMenu();
        goto menu;
    } else if (pilihan == 10) {
        std::cin.ignore();
    } else {
        std::cin.ignore();
        std::cout<<"Pilihan salah, tekan enter untuk melanjutkan"<<std::endl;
        std::cin.get();
        system("cls");
        goto menu;
    }
}