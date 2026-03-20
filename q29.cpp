#include <iostream>
using namespace std;

int main() {
    int temp[30];

    for(int i = 0; i < 30; i++) {
        cin >> temp[i];
    }

    int minTemp = temp[0];

    for(int i = 1; i < 30; i++) {
        if(temp[i] < minTemp) {
            minTemp = temp[i];
        }
    }

    cout << minTemp;

    return 0;
}