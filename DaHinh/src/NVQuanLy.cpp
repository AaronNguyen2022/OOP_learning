#include "NVQuanLy.h"

using namespace std;

NVQuanLy::NVQuanLy(){
}

NVQuanLy::~NVQuanLy(){
}

void NVQuanLy::Nhap(){
    NhanVien::Nhap();   // Cach truy cap phuong thuc BaseClass
    cout << "Enter he so chuc vu: ";
    cin >> HeSoChucVu;
    cout << "Enter Thuong: ";
    cin >> Thuong;
};

void NVQuanLy::Xuat(){
    NhanVien::Xuat();
    cout << "\nHe so chuc vu: " << HeSoChucVu;
    cout << "\nThuong: " << Thuong;
};
float NVQuanLy::TinhLuong(){
    Luong = (LuongCoBan * HeSoChucVu) + Thuong;
    return Luong;
}

