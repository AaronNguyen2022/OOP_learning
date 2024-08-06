#ifndef NV_QuanLy_H
#define NV_QuanLy_H

#include "NhanVien.h"

class NVQuanLy : public NhanVien
{
    int HeSoChucVu;
    float Thuong;
public:
    void Nhap();
    void Xuat();
    float TinhLuong();
    NVQuanLy();
    ~NVQuanLy();
};

#endif