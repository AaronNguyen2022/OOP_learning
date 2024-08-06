#ifndef NV_SanXuat_H
#define NV_SanXuat_H

#include "NhanVien.h"

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