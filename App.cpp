#ifndef APP_CPP
#define APP_CPP

#include <iostream>
#include "DanhSach.cpp"  // Nhung lop DanhSach
using namespace std;

class App {
private:
    DanhSach list_sv;

public:
    void run() {
        char choice;
        do {
            cout << "\nChuc nang:\n";
            cout << "1. Nhap sinh vien\n";
            cout << "2. Xoa sinh vien\n";
            cout << "3. Sua sinh vien\n";
            cout << "4. Sap xep sinh vien theo ho ten\n";
            cout << "5. Hien thi danh sach sinh vien\n";
            cout << "6. Tim sinh vien theo ho ten\n";
            cout << "0. Thoat\n";
            cout << "Lua chon cua ban: ";
            cin >> choice;

            switch (choice) {
            case '1':
                do {
                    list_sv.themSinhVien();
                    cout << "Nhap tiep? (c/k): ";
                    cin >> choice;
                } while (choice == 'c');
                break;
            case '2': {
                string ma;
                cout << "Nhap ma sinh vien can xoa: ";
                cin >> ma;
                list_sv.xoaSinhVien(ma);
                break;
            }
            case '3': {
                string ma;
                cout << "Nhap ma sinh vien can sua: ";
                cin >> ma;
                list_sv.suaSinhVien(ma);
                break;
            }
            case '4':
                list_sv.sapXepSV();
                break;
            case '5':
                list_sv.hienThi();
                break;
            case '6': {
                string name;
                cin.ignore();
                cout << "Nhap ten sinh vien can tim: ";
                getline(cin, name);
                list_sv.timKiem(name);
                break;
            }
            case '0':
                cout << "Ket thuc chuong trinh.\n";
                break;
            default:
                cout << "Lua chon khong hop le.\n";
                break;
            }
        } while (choice != '0');
    }
};

#endif // APP_CPP
