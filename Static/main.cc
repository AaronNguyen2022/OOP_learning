#include <iostream>
using namespace std;

class AClass {
private:
    static int x; // Thành phần dữ liệu tĩnh
    int y;

public:
    AClass() {
        y = 0;
    }

    void getxy() {
        x = x + 100;
        cout << "Value of x = " << x << endl;
        y = y + 10;
        cout << "Value of y = " << y << endl;
    }
};

int AClass::x = 0; // Khởi tạo giá trị cho thành phần dữ liệu tĩnh x

int main() {
    AClass a;
    cout << "Get x and y of a:" << endl;
    a.getxy();

    AClass b;
    cout << "Get x and y of b:" << endl;
    b.getxy();

    return 0;
}
