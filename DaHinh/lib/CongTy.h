#include "NVQuanLy.h"
#include "NVSanXuat.h"
#include "NVVanPhong.h"
#include <vector>

class CongTy 
{
    vector<NVSanXuat>   NhanVienSanXuat;
    vector<NVVanPhong>  NhanVienVanPhong;
    vector<NVQuanLy>    NhanVienQuanLy;
    vector<NhanVien *>  DSNhanVien;
public:
    void Nhap();
    void Xuat();
    CongTy();
    ~CongTy();
};