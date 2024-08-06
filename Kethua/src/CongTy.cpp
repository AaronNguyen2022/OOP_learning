#include "CongTy.h"

void CongTy::Nhap(){
    // Chon mode:
    int luaChon;
    do 
    {
        cout << "\n------------Menu-----------";
        cout << "\n1.Nhap Nhan Vien San Xuat";
        cout << "\n2.Nhap Nhan Vien Van Phong";
        cout << "\n3.Nhap Nhan Vien Quan Ly";
        cout << "\n4.Thoat!";
        do // khac 4
        {
            cout << "\nLua chon cua ban la: ";
            cin >> luaChon;
            if(luaChon < 1 || luaChon > 4) {
                cout << "\nNhap sai! Can Nhap lai!! ";
            }
        } while(luaChon < 1 || luaChon > 4);  // khac [1..3] la error

        if(luaChon == 1)
        {
            NVSanXuat nvsx;
            nvsx.Nhap();
            NhanVienSanXuat.push_back(nvsx);
        } else if (luaChon == 2)
        {
            NVVanPhong nvvp;
            nvvp.Nhap();
            NhanVienVanPhong.push_back(nvvp);
        
        } else if (luaChon == 3)
        {
            NVQuanLy nvql;
            nvql.Nhap();
            NhanVienQuanLy.push_back(nvql);
        };

        // switch (luaChon)
        // {
        // case 1:
        // {
        //     NVSanXuat nvsx;
        //     nvsx.Nhap();
        //     NhanVienSanXuat.push_back(nvsx);
        //     break;
        // }
        // case 2:
        // {
        //     NVVanPhong nvvp;
        //     nvvp.Nhap();
        //     NhanVienVanPhong.push_back(nvvp);
        //     break;
        // }
        // case 3:
        // {
        //     NVQuanLy nvql;
        //     nvql.Nhap();
        //     NhanVienQuanLy.push_back(nvql);
        //     break;
        //     }
        // }
    } while (luaChon != 4); // Khac [1..4] la thoat
}

void CongTy::Xuat(){
    cout << "\n------Danh sach nhan vien san xuat:";
    for(int i=0; i < NhanVienSanXuat.size(); i++){
        NhanVienSanXuat[i].Xuat();
    }
    cout << "\n------Danh sach nhan vien van phong:";
    for(int i=0; i < NhanVienVanPhong.size(); i++){
        NhanVienVanPhong[i].Xuat();
    }
    cout << "\n------Danh sach nhan vien quan ly:";
    for(int i=0; i < NhanVienQuanLy.size(); i++){
        NhanVienQuanLy[i].Xuat();
    }
}

CongTy::CongTy()
{
};

CongTy::~CongTy()
{
};
