#ifndef SINHVIEN_CPP
#define SINHVIEN_CPP

#include <iostream>
#include <string>
using namespace std;

class SinhVien {
private:
    string id;
    string ten;
    string ns;
    string gioitinh;
    string lop;

public:
    // Getter và Setter cho các thành viên dữ liệu
    string getId() const { return id; }
    void setId(const string& id) { this->id = id; }

    string getTen() const { return ten; }
    void setTen(const string& ten) { this->ten = ten; }

    string getNs() const { return ns; }
    void setNs(const string& ns) { this->ns = ns; }

    string getGioitinh() const { return gioitinh; }
    void setGioitinh(const string& gioitinh) { this->gioitinh = gioitinh; }

    string getLop() const { return lop; }
    void setLop(const string& lop) { this->lop = lop; }

    // Ham nhap thong tin sinh vien
    friend istream& operator>>(istream& is, SinhVien& a) {
        cout << "Nhap ma sinh vien: ";
        is >> a.id;
        is.ignore();  // Bo qua ky tu xuong dong sau cin
        cout << "Nhap ho ten sinh vien: ";
        getline(is, a.ten);
        cout << "Nhap ngay sinh (dd/mm/yyyy): ";
        is >> a.ns;
        cout << "Nhap gioi tinh: ";
        is >> a.gioitinh;
        cout << "Nhap lop: ";
        is >> a.lop;
        return is;
    }

    // Ham xuat thong tin sinh vien
    friend ostream& operator<<(ostream& os, const SinhVien& a) {
        os << "Ma SV: " << a.id << ", Ho ten: " << a.ten
           << ", Ngay sinh: " << a.ns << ", Gioi tinh: " << a.gioitinh
           << ", Lop: " << a.lop;
        return os;
    }

    // Toan tu so sanh theo ho ten sinh vien
    bool operator<(const SinhVien& other) const {
        return this->ten < other.ten;
    }
};

#endif // SINHVIEN_CPP
