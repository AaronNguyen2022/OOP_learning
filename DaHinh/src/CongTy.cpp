#include "CongTy.h"
// #include <iostream>
// using namespace std;

void CongTy::Nhap(){
    int luaChon = 4;
    do 
    {
        cout << "\n------------Menu-----------";
        cout << "\n1.Nhap Nhan Vien San Xuat!";
        cout << "\n2.Nhap Nhan Vien Van Phong!";
        cout << "\n3.Nhap Nhan Vien Quan Ly!";
        cout << "\n4.Thoat!";
        do // khac 4
        {
            cout << "\nLua chon cua ban la: ";
            cin >> luaChon;
            if(luaChon < 1 || luaChon > 4) {
                cout << "\nNhap sai! Can Nhap lai!! ";
            }
        } while(luaChon < 1 || luaChon > 4);  // khac [1..3] la error

        
        NhanVien *temp = nullptr;
        
        if(luaChon == 1)
        {
            cout << "Ban dang nhap nvSX:" << endl;
            temp = new NVSanXuat;
            
        } else if (luaChon == 2)
        {
            cout << "Ban dang nhap nvVP:" << endl;
            temp = new NVVanPhong;
        
        } else if (luaChon == 3)
        {
            cout << "Ban dang nhap nvQL:" << endl;
            temp = new NVQuanLy;
        };
        
        if (temp != nullptr) {
            temp->Nhap();
            DSNhanVien.push_back(temp);
        }
        
    } while (luaChon != 4); // Khac [1..4] la thoat
}

void CongTy::Xuat(){
    cout << "\n###### Danh sach nhan vien ######";
    for(int i=0; i < DSNhanVien.size(); i++){
        DSNhanVien[i]->Xuat();
    }
}

CongTy::CongTy()
{
};

CongTy::~CongTy()
{
    for (NhanVien* nv : DSNhanVien) {
        delete nv;
    }
    DSNhanVien.clear();
};
