#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class EmailLength : public runtime_error
{
public:
    EmailLength() : runtime_error("\nEmail phai co it nhat 8 ky tu"){};
};

class Character : public runtime_error
{
public:
    Character() : runtime_error("\nEmail phai co @"){};
};

void GetEmail(vector<char> &EmailInput, string email){
    cout << "\n Nhap email: ";
    cin >> email;
    // Lay data chuoi bo vao vector
    copy(email.begin(), email.end(), back_inserter(EmailInput));
}
void ShowEmail(vector<char> &EmailInput){
    for(int i=0; i < EmailInput.size(); i++){
        cout << EmailInput[i];
    }
}

int main(){
    string email;
    vector<char> EmailInput;

    GetEmail(EmailInput, email);
    ShowEmail(EmailInput);
    try
    {
        if(EmailInput.size() < 8)
        throw EmailLength();
    }
    catch(EmailLength &exception)
    {
        cout << exception.what();
    }

    try
    {
        vector<char>::iterator iter;
        iter = find(EmailInput.begin(), EmailInput.end(), '@');
        if(iter == EmailInput.end()){
            throw Character();
        }

    }
    catch(Character &exception)
    {
        cout << exception.what();
    }
    
    
    return 0;
}