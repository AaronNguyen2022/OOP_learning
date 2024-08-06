#include "lib.h"

// Define function

void prinHello(){
    cout << "Hello everyone!!\n";
}

void HocSinh::nhap(){
    fflush(stdin);
    cout << "\nNhap ho ten cua ho sinh:";
    getline(cin, hoTen);
    fflush(stdin);
    cout << "\nNhap dia chi cua ho sinh:";
    getline(cin, diaChi);
    cout << "\nNhap diem Toan:";
    cin >> diemToan;
    cout << "\nNhap diem Van:";
    cin >> diemVan;
};

void HocSinh::xuat(){
    cout << "\nDia chi: " << diaChi; 
    cout << "\nHo Ten: " << hoTen; 
    cout << "\nDiem Toan: " << diemToan; 
    cout << "\nDiem Van: " << diemVan; 
}   

// Muon rut gon roi tra ve luon
PhanSo  PhanSo::RutGon(){
    int a, b;
    a = abs(this->TuSo);
    b = abs(this->MauSo);
    while(a != b){
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    this->TuSo = this->TuSo / a;
    this->MauSo = this->MauSo / a;
    // Value cua TuSo va MauSo da thay doi
    return *this;
}
void PhanSo::Nhap(){
    cout << "Nhap Tu So: ";
    cin >> this->TuSo;
    cout << "Nhap Mau So: ";
    cin >> this->MauSo;
}
void PhanSo::Xuat(){
    cout << this->TuSo <<  "/" << this->MauSo; 
}


HocSinh::HocSinh(){
}

HocSinh::~HocSinh(){
}
