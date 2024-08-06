#ifndef Nhat_Vien_H
#define Nhat_Vien_H
#include <iostream>
#include <string>
#include <iostream>
using namespace std;

class NhanVien
{
protected:
    string HoTen, NgaySinh;
    float LuongCoBan, Luong;
public:
    void Nhap();
    void Xuat();
    NhanVien();
    ~NhanVien();
};

#endif 