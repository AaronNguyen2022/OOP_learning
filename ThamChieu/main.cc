#include <iostream>
using namespace std;

void ThamChieu(int &valC){
    valC++;
}
void ThamTri(int valT){
    valT++;
}
int main(){
    int a = 10;
    int b = 20;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    ThamChieu(a);
    ThamTri(b);
    cout << "After a = " << a << endl;  // Bien a da thay doi sau khi truyen tham chieu
    cout << "After b = " << b << endl;  // Bien b KHUONG thay doi sau khi truyen tham tri
    return 0;
}