#ifndef DANHSACH_CPP
#define DANHSACH_CPP

#include <bits/stdc++.h>
#include "SinhVien.cpp"  // Nhung lop SinhVien
using namespace std;

class DanhSach {
private:
    vector<SinhVien> sinhvien;

public:
    // Them sinh vien
    void themSinhVien() {
        SinhVien sv;
        cin >> sv;
        sinhvien.push_back(sv);
    }

    // Xoa sinh vien theo ma sinh vien
    void xoaSinhVien(const string& ma) {
        for (auto it = sinhvien.begin(); it != sinhvien.end(); ++it) {
            if (it->getId() == ma) {  // Dùng getter để truy cập
                sinhvien.erase(it);
                cout << "Da xoa sinh vien co ma " << ma << endl;
                return;
            }
        }
        cout << "Khong tim thay sinh vien co ma " << ma << endl;
    }

    // Sua thong tin sinh vien
    void suaSinhVien(const string& ma) {
        for (int i = 0; i < sinhvien.size(); ++i) {
            if (sinhvien[i].getId() == ma) {  // Dùng getter để truy cập
                cout << "Nhap thong tin moi cho sinh vien co ma " << ma << ":" << endl;
                cin >> sinhvien[i];
                cout << "Da cap nhat thong tin sinh vien.\n";
                return;
            }
        }
        cout << "Khong tim thay sinh vien co ma " << ma << endl;
    }

    // Hien thi danh sach sinh vien
    void hienThi() {
        for (int i = 0; i < sinhvien.size(); ++i) {
            cout << sinhvien[i] << endl;  // In thong tin sinh vien
        }
    }

    // Sap xep danh sach sinh vien theo ho ten
    void sapXepSV() {
        sort(sinhvien.begin(), sinhvien.end());
        cout << "Da sap xep danh sach sinh vien theo ho ten.\n";
    }

    // Tim kiem sinh vien theo ho ten
    void timKiem(const string& name) {
        for (int i = 0; i < sinhvien.size(); ++i) {
            if (sinhvien[i].getTen() == name) {  // Dùng getter để truy cập
                cout << sinhvien[i] << endl;
                return;
            }
        }
        cout << "Khong tim thay sinh vien co ten " << name << endl;
    }
};

#endif // DANHSACH_CPP
