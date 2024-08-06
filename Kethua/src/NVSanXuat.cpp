#include "NVSanXuat.h"

NVSanXuat::NVSanXuat(){
}

NVSanXuat::~NVSanXuat(){
}

void NVSanXuat::Nhap(){
    NhanVien::Nhap();   // Cach truy cap phuong thuc BaseClass
    cout << "\nEnter so sp: ";
    cin >> SoSanPham;

};

void NVSanXuat::Xuat(){
    NhanVien::Xuat();
    cout << "\nSo sp: " << SoSanPham;
};

float NVSanXuat::TinhLuong(){
    Luong = LuongCoBan + SoSanPham * 2000;
    return Luong;
}