/*Chứa khai báo hàm và định nghĩa macro.
Được sử dụng để chia sẻ thông tin giữa các tệp nguồn (source file).
Đảm bảo rằng tất cả các hằng số, biến toàn cục và prototype hàm được đặt trong tệp này.
*/
#include <iostream>
#include <string>
#ifndef LIB_H
#define LIB_H   // Define only one, if another file call lib.h, LIB_H will be defined again
using namespace std;

// Khai báo hàm
void prin();

class PhanSo{

private:
    int tuSo, mauSo;
public:
    PhanSo(){
        tuSo = 1;
        mauSo = 1;
    }
    PhanSo(int tu, int mau){
        tuSo = tu;
        mauSo = mau;
    }
    PhanSo(int tu){
        tuSo = tu;
    }

    void getValue();
    
};

class Car {
private:
    int year;
    string make;
    int speed = 0;

public:
    // Constructor
    Car(int carYear, const string& carMake) {
        year = carYear;
        make = carMake;
        speed = 0;
    }

    // Accelerate the car
    void accelerate();
    // Brake the car
    void brake();
    // Display car details
    void showData();
};

#endif