#include<iostream>
using namespace std;

class Student {
    string name;
    int marks;

public:
    // Constructor
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    // Member function to display details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Creating object and passing values
    Student s1("Anmol", 85);

    // Display student details
    s1.display();

    return 0;
}