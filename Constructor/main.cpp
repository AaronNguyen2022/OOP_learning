#include "lib.h"

int main(){

    // PhanSo ps1(2, 3);
    // PhanSo ps2(7);
    // PhanSo ps3;
    // ps1.getValue();
    //     prin();
    // ps2.getValue();
    //     prin();
    // ps3.getValue();

    // Create a Car object
    Car myCar(2023, "Audi");

    // Accelerate the car five times
    for (int i = 0; i < 5; ++i) {
        myCar.accelerate();
        myCar.showData();
    }

    // Brake the car five times
    for (int j = 0; j < 5; ++j) {
        myCar.brake();
        myCar.showData();
    }
    
    return 0;
}
