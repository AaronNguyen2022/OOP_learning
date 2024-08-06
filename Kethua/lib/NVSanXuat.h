#ifndef NV_SanXuat_H
#define NV_SanXuat_H

#include "NhanVien.h"
// #include <string>

class NVSanXuat : public NhanVien
{
    int SoSanPham;
public:
    void Nhap();
    void Xuat();
    float TinhLuong();
    NVSanXuat();
    ~NVSanXuat();
};

#endif 