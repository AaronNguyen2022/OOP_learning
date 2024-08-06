#include "lib.h"

// Define function

void prin(){
    cout << "\n==================";
}

void PhanSo::getValue(){
    cout << "\n" << tuSo;
    cout << "\n" << mauSo;
}

    // Accelerate the car
void Car::accelerate() {
        speed += 5;
    }

    // Brake the car
void Car::brake() {
        if (speed > 5) {
            speed -= 5;
        } else {
            speed = 0;
        }
    }

    // Display car details
void Car::showData() {
        cout << "Brand: " << make << endl;
        cout << "Year: " << year << endl;
        cout << "Current speed: " << speed << " mph" << endl;
    }