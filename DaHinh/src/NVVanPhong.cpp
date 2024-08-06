#include "NVVanPhong.h"

NVVanPhong::NVVanPhong(){
}

NVVanPhong::~NVVanPhong(){
}

void NVVanPhong::Nhap(){
    NhanVien::Nhap();   // Cach truy cap phuong thuc BaseClass
    cout << "Enter so ngay lv: ";
    cin >> SoNgayLamViec;
    cout << "Enter tro cap: ";
    cin >> TroCap;
};

void NVVanPhong::Xuat(){
    NhanVien::Xuat();
    cout << "\nSo Ngay lam viec: " << SoNgayLamViec;
    cout << "\nTro cap: " << TroCap;
};

float NVVanPhong::TinhLuong(){
    Luong = LuongCoBan + (SoNgayLamViec * 100000) + TroCap;
    return Luong;
}
