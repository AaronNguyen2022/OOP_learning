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
    // ao hay thuan ao
    virtual void Nhap();
    virtual void Xuat();
    NhanVien();
    ~NhanVien();
};

#endif 