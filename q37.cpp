#include <iostream>
using namespace std;

int main() {
    string username;
    cin >> username;

    bool valid = true;

    for(char ch : username) {
        if(!((ch >= 'A' && ch <= 'Z') || 
             (ch >= 'a' && ch <= 'z') || 
             (ch >= '0' && ch <= '9'))) {
            valid = false;
            break;
        }
    }

    if(valid)
        cout << "Valid Username";
    else
        cout << "Invalid Username";

    return 0;
}
