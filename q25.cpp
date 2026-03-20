#include <iostream>
using namespace std;

int main() {
    string password;
    cin >> password;

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

    for(char ch : password) {
        if(ch >= 'A' && ch <= 'Z') hasUpper = true;
        else if(ch >= 'a' && ch <= 'z') hasLower = true;
        else if(ch >= '0' && ch <= '9') hasDigit = true;
        else if(ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '!' || ch == '&' || ch == '*')
            hasSpecial = true;
    }

    if(hasUpper && hasLower && hasDigit && hasSpecial)
        cout << "Valid Password";
    else
        cout << "Invalid Password";

    return 0;
}