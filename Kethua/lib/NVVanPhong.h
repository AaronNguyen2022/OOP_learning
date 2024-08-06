#ifndef NV_VanPhong_H
#define NV_VanPhong_H

#include "NhanVien.h"
// #include <string>

class NVVanPhong : public NhanVien
{
    int SoNgayLamViec;
    float TroCap;
public:
    void Nhap();
    void Xuat();
    float TinhLuong();
    NVVanPhong();
    ~NVVanPhong();
};

#endif