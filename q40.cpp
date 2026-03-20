#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str, word, result = "";
    getline(cin, str);

    stringstream ss(str);
    while(ss >> word) {
        if(result != "") result += " ";
        result += word;
    }

    if(result.length() > 0) {
        if(result[0] >= 'a' && result[0] <= 'z')
            result[0] = result[0] - 32;
        for(int i = 1; i < result.length(); i++) {
            if(result[i] >= 'A' && result[i] <= 'Z')
                result[i] = result[i] + 32;
        }
    }

    int words = 0, digits = 0, special = 0;
    stringstream ss2(result);
    while(ss2 >> word) words++;

    for(char ch : result) {
        if(ch >= '0' && ch <= '9') digits++;
        else if(!((ch >= 'A' && ch <= 'Z') || 
                  (ch >= 'a' && ch <= 'z') || 
                  ch == ' ')) {
            special++;
        }
    }

    bool valid = true;
    for(char ch : result) {
        if(!((ch >= 'A' && ch <= 'Z') || 
             (ch >= 'a' && ch <= 'z') || 
             (ch >= '0' && ch <= '9') || 
             ch == ' ')) {
            valid = false;
            break;
        }
    }

    cout << "Normalized String: " << result << endl;
    cout << "Words: " << words << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special Characters: " << special << endl;

    if(valid)
        cout << "Valid String";
    else
        cout << "Invalid String";

    return 0;
}