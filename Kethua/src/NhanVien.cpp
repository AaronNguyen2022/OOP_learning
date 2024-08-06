#include "NhanVien.h"


NhanVien::NhanVien(){
    LuongCoBan = 200000;
};
NhanVien::~NhanVien(){
};
void NhanVien::Nhap(){
    // fflush(stdin);  // Xoa bo nho dem
    cout << "\nEnter ho ten: ";
    getline(cin, HoTen);

    // fflush(stdin);
    cout << "\nEnter ngay sinh: ";
    getline(cin, NgaySinh);
};

void NhanVien::Xuat(){
    cout << "\nHo ten: " << HoTen;
    cout << "\nNgay sinh: " << NgaySinh;
    cout << "\nLuong co ban: " << LuongCoBan;
};



