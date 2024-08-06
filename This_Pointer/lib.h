/*Chứa khai báo hàm và định nghĩa macro.
Được sử dụng để chia sẻ thông tin giữa các tệp nguồn (source file).
Đảm bảo rằng tất cả các hằng số, biến toàn cục và prototype hàm được đặt trong tệp này.
*/
#include <iostream>
#include <string>
#ifndef LIB_H
#define LIB_H   // Define only one, if another file call lib.h, LIB_H will be defined again

using namespace std;

// Khai báo hàm
void prinHello();

class HocSinh{

private:
    string hoTen, diaChi;
    int diemToan, diemVan;

public:
    void nhap();
    void xuat();

    HocSinh();      // Constructor (Phuong thuc khoi tao mac dinh)
    ~HocSinh();     // Destructor  (Phuong thuc pha huy)
};

class PhanSo{
private:
    int TuSo, MauSo;
public:
    PhanSo RutGon();
    void Nhap();
    void Xuat();
};


#endif