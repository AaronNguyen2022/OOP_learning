#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack {
private:
    vector<T> elements;  // Sử dụng vector để lưu trữ các phần tử của stack

public:
    // Kiểm tra xem stack có rỗng không
    bool isEmpty() const {
        return elements.empty();
    }

    // Thêm phần tử vào stack
    void push(const T& element) {
        elements.push_back(element);
    }

    // Xóa phần tử khỏi stack
    void pop() {
        if (elements.empty()) {
            cout << "Stack is empty, cannot pop." << endl;
        } else {
            elements.pop_back();
        }
    }

    // Lấy phần tử trên cùng của stack
    T top() const {
        if (elements.empty()) {
            cerr << "Stack is empty, no top element." << endl;
            exit(1); // Exit chương trình nếu stack rỗng
        }
        return elements.back();
    }

    // Lấy kích thước của stack
    size_t size() const {
        return elements.size();
    }
};

int main() {
    // Tạo một stack lưu trữ các số nguyên
    Stack<int> intStack;

    // // Thêm các phần tử vào stack
    // intStack.push(1);
    // intStack.push(2);
    // intStack.push(3);

    // // Lấy và xóa các phần tử khỏi stack
    // while (!intStack.isEmpty()) {
    //     cout << "Top element: " << intStack.top() << endl;
    //     intStack.pop();
    // }
    
    if(intStack.isEmpty()){
        cout << "Stack empty!";
    } else {
        cout << "Top element: " << intStack.top() << endl;
        intStack.pop();
    }

    // // Tạo một stack lưu trữ các chuỗi ký tự
    // Stack<string> stringStack;

    // // Thêm các phần tử vào stack
    // stringStack.push("Hello");
    // stringStack.push("World");

    // // Lấy và xóa các phần tử khỏi stack
    // while (!stringStack.isEmpty()) {
    //     cout << "Top element: " << stringStack.top() << endl;
    //     stringStack.pop();
    // }

    return 0;
}
